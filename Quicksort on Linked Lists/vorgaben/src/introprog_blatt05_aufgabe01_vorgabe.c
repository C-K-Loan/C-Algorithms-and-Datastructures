#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct product product;

struct product{
	char name[100];
	int preis;
};

typedef struct list_element list_element;

struct list_element {
	product data;
	list_element* next;
};

typedef struct list list;

struct list {
	list_element* first;
	list_element* last;
};

void init_list(list* mylist) 
{
	mylist->first=NULL;
	mylist->last=NULL;
}

void insert_front(list_element* le, list* mylist)
{	
	le->next=mylist->first;
	mylist->first=le;
	if (mylist->last == NULL) 
	{
		mylist->last=le;
	}
}

void free_list(list* mylist)
{
	list_element* curr=mylist->first;
	while (curr != NULL)
	{
		list_element* tmp=curr;
		curr=curr->next;
		free(tmp);
	}
	mylist->first=NULL;
}

void read_data(char* filename, list* mylist)
{
	assert(mylist != NULL);
	FILE* f=fopen(filename,"rb");
	assert(f != NULL);
	while (1)
	{
		list_element* le=malloc(sizeof(list_element));	
		assert(le != NULL);
		int result=fscanf(f,"%s %d",le->data.name,&le->data.preis);		
		if (result != 2) {
			free(le);
			break;
		}
		insert_front(le,mylist);
	}
	fclose(f);
}

list_element* partition( list* input, list* left, list* right )
{
	assert(input->first != NULL);
	list_element* pivot=input->first;
	init_list(left);
	init_list(right);
	list_element* curr=pivot->next;
	while (curr != NULL)
	{
		list_element* next=curr->next;
		if (curr->data.preis < pivot->data.preis) {
			insert_front(curr,left);
		} else {
			insert_front(curr,right);
		}
		curr=next;
	}
	return pivot;
}


void qsort_list(list* mylist)
{
	if (mylist->first != mylist->last)
	{
		list left;															// List for all elements smaller than pivot
		list right;															// List for all elements bigger than pivot	
		list_element* pivot=partition(mylist,&left,&right);   // Pick pivot and insert all elements into appropriate lists
		assert(pivot != NULL);
		qsort_list(&left); 											   // Sort left list
		qsort_list(&right);												// Sort right list
																				// Reconnect lists
	
		if (left.first == NULL) 										// Check, if left list is empty
		{
			left.first=pivot;  
			left.last=pivot;
		} else {
			assert(left.last->next == NULL);
			left.last->next=pivot;
		}
		mylist->first=left.first;	
		pivot->next=right.first;

		if (right.first == NULL)										// Check, if right list is empty
		{
			mylist->last=pivot;
		} else
		{
			mylist->last=right.last;
		}
	}
}

void print_list(list* mylist)
{
	list_element* curr=mylist->first;
	while (curr != NULL)
	{
		printf("%s %d\n",curr->data.name,curr->data.preis);
		curr=curr->next;
	}
}

int main(int argc, char** args)
{
	if (argc != 2)
	{
		printf("Nutzung: %s <Dateiname>\n",args[0]);
		return 1;
	}
	list mylist;
	init_list(&mylist);
	read_data(args[1],&mylist);
	qsort_list(&mylist);
	printf("Sortierte Liste:\n");
	print_list(&mylist);
	free_list(&mylist);
	return 0;
}






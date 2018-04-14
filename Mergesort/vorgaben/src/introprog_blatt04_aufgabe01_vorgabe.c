#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Gibt das Array im korrekten Format aus.
void print_array(int array[], int len) {
    printf("Werte:");
    for (int i = 0; i < len ; i++) {
        printf("%d \n", array[i]);
    }
}
void merge(int* z,int first, int middle, int last) {
  int x[last - first+1];
    
    int pos_left = first;

    int pos_right = middle +1;

    int pos_merge = 1;

    while( pos_left <= middle && pos_right <= last) {

        if(z[pos_left] <= z[pos_right]) {
            x[pos_merge] = z[pos_left];
            pos_left ++;

     
        }
        
        else{
            x[pos_merge] = z[pos_right];
            pos_right ++;
        }
        pos_merge ++;
    }
    while(pos_left <= middle) {
        x[pos_merge] = z[pos_left];
        pos_left ++;
        pos_merge ++;
        

    }
    while(pos_right <= last) {
        x[pos_merge] = z[pos_right];
        pos_right ++;
        pos_merge ++;
        
    }

    int y = 1;
    while(y < pos_merge) {
        z[first + y - 1] = x[y];
        y++;
    }
}
void merge_sort(int* array, int first, int last)
{
    if(first < last) {
        int middle = (first + last)/2;
        merge_sort(array, first, middle);
        merge_sort(array, middle + 1, last);
        merge(array, first, middle, last);
    }
  
 // HIER Funktion merge_sort() implementieren
}

/*
Hauptprogramm.

Liest Integerwerte aus einer Datei (eine Zahl pro Zeile) und gibt
diese sortiert im selben Format (eine Zahl pro Zeile) über die
Standardausgabe wieder aus.

Aufruf: ./introprog_blatt04_aufgabe01_2 <maximale anzahl>  <dateipfad>
*/
int main (int argc, char *argv[])
{
    if (argc!=3){
        printf ("usage: %s <maximale anzahl>  <dateipfad>\n", argv[0]);
        exit(2);
    }
    
    int maxvalue = atoi(argv[1]);
    FILE *valuefile = fopen(argv[2],"r");
    if (valuefile==NULL)
    {
	    perror("could not open file");
	    return -1;
    }
    int len=0;
    int array[maxvalue];
    // read file into array
    while((fscanf(valuefile,"%d",&array[len])==1) && (len<maxvalue))
	    len++;
    fclose(valuefile);

    printf("Eingabe:\n");
    print_array(array, len);

    merge_sort(array,0,len-1);

    printf("Sortiert:\n");
    print_array(array, len);

    return 0;
}

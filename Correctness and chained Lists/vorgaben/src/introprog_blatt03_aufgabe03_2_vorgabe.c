#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct list list;
typedef struct list_element list_element;

struct list
{
  list_element *first;
};

struct list_element
{
  int value;
  list_element *next;
};


// Gibt die Liste nach dem gewünschten Format aus.
void print_liste (list * mylist)
{
  list_element *curr_element = mylist->first;
  while (curr_element != NULL)
  {
    printf (" %d", curr_element->value);
    curr_element = curr_element->next;
  }
  printf ("\n");
}

int lese_liste (list * mylist)
{
  int i = 0;
  int temp;
  list_element **ptr_to_last_next_ptr = &mylist->first;
  while (scanf ("%d", &temp) == 1)
  {
    list_element *new_element = malloc (sizeof (list_element));
    assert (new_element != NULL);
    new_element->value = temp;
    *ptr_to_last_next_ptr = new_element;
    ptr_to_last_next_ptr = &(new_element->next);
    i++;
  }
  *ptr_to_last_next_ptr = NULL;
  return i;
}

void liste_freigeben (list * mylist)
{
  list_element *curr = mylist->first;
  while (curr != NULL)
  {
    list_element *next = curr->next;
    free (curr);
    curr = next;
  }
}

void threshold_sorted (list * input, int threshold, list * output_smaller,
  list * output_greaterequal)
{
  // Implementieren Sie hier die threshold Funktion
}

int main (int argc, char *argv[])
{
  int schwellwert;
  if (argc != 2)
  {
    printf("Übergeben Sie den Schwellwert als Kommandozeilenparameter!\n");
    return -1;
  }
  schwellwert = atoi (argv[1]);
  list input;
  list output_s;
  list output_geq;
  input.first = NULL;
  output_s.first = NULL;
  output_geq.first = NULL;
  int len = lese_liste (&input);
  printf ("Eingabeliste: ");
  print_liste (&input);
  threshold_sorted (&input, schwellwert, &output_s, &output_geq);
  printf ("Unter dem Schwellwert: ");
  print_liste (&output_s);
  printf ("Über dem Schwellwert: ");
  print_liste (&output_geq);
  printf ("Alte Eingangsliste: ");
  print_liste (&input);
  liste_freigeben (&input);
  liste_freigeben (&output_s);
  liste_freigeben (&output_geq);
  return 0;
}

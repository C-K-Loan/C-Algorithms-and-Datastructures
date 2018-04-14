#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int MAX_LAENGE = 1000; 

// Gibt das Array im korrekten Format aus.
void print_array(int array[], int len) {
    printf("Liste:");
    for (int i = 0; i < len ; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

//Liest eine Liste an Zahlen von der Standardeingabe und speichert diese in array[]
//Gibt die Anzahl der eingelesenen Zahlen zurück
int lese_array(int array[]) {
    int i = 0;
    while (scanf("%d", &array[i]) == 1) {
        i++;
        assert(i<MAX_LAENGE); //Bricht das Programm lautstark ab, wenn diese Annahme verletzt wird.
    }
    return i;
}


/***************** Zu implementierende Funktionen ********************/

// Nach dem Aufruf ist das Array sortiert
void selection_sort(int array[], int len) {
    // HIER
    // Implementiere Selection Sort nach der Pseudocode Vorgabe
    // Markiere in Kommentaren die Pseudocodezeilennummern, die in der jeweiligen Quelltextzeile implementiert wird.
}


int main(int argc, char *argv[]) {
    int array[MAX_LAENGE];
    int len = lese_array(array);
    printf("Eingabe:\n");
    print_array(array, len);
    //HIER rufe selection_sort auf
    printf("Sortiert:\n");
    print_array(array, len);
    return 0;
}

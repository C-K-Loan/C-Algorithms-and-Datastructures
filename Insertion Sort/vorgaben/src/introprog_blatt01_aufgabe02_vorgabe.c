#include <stdio.h>
#include <stdlib.h>

int MAX_LAENGE = 1000;

// Gibt das Array nach dem gewünschten Format aus.
void print_array(int array[], int len) {
    printf("Liste:");
    for (int i = 0; i < len ; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int lese_array(int array[]) {
    int i = 0;

    while (scanf("%d", &array[i]) == 1) {
        i++;
    }
    return i;
}

void insertion_sort(int array[], int len) {
    // HIER
    // Wir sortieren das Array nach dem Insertion sort Verfahren. Dabei benutzen wir die
    // in-place Variante, d.h. wir benutzen nur das originale Array.
}

int main(int argc, char *argv[]) {
    int array[MAX_LAENGE];
    int len = lese_array(array);
    printf("Unsortierte "); print_array(array, len);
    // HIER
    // Rufe die insertionsort Funktion auf.
    printf("Sortierte "); print_array(array, len);
    // Nicht vergessen den Speicher auch wieder freizugegeben :).
    return 0;
}

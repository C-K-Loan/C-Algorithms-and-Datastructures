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

// Finde den kleinsten Wert des Array und gebe ihn zurück
int finde_minimum(int array[], int len) {
    // HIER
    // Finde das Minimum der Liste und gebe es zurück. Halte dich soweit möglich an
    // deinen Pseudo Code.
    // Rückgabewert ist das Minimum
}


int main(int argc, char *argv[]) {
    int array[MAX_LAENGE];
    int len = lese_array(array);
    print_array(array, len);
    //HIER rufe finde_minimum auf
	int minimum = ...
    printf("Kleinster Wert: %d\n", minimum);
    return 0;
}

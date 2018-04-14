#include <stdio.h>
#include <stdlib.h>

int MAX_LAENGE = 1;

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
    int i=0;
    int key=0;
    int j =0;

        for (j=1;j<len;j++){
            key= array[j];
            i= j-1;
                while (i>-1 && array[i]>key){
                    array[i+1]=array[i];
                    i--;
                    array[i+1]=key;
                }
        }
}



int main(int argc, char *argv[]) {
    int array[MAX_LAENGE];
    int len = lese_array(array);
    printf("Unsortierte "); print_array(array, len);
    // HIER
    insertion_sort(array,len);
    printf("Sortierte "); print_array(array, len);
    // Nicht vergessen den Speicher auch wieder freizugegeben :).
    return 0;
}
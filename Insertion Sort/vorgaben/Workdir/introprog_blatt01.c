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







    //key <- liste[1]
    //i<-1
    //while i<=länge_liste 
    //    if key > liste[i]
    //        key<-liste[i]
    //    i++

    // Finde den kleinsten Wert des Array und gebe ihn zurück
    int finde_minimum(int array[], int len) {
        
    int i=0;
    signed int key=array[0];
    for(i=0; i<len; i++) {
        if (array[i]<key) {

            key=array[i];
        }
    }
        return key;
    }
    int

     main(int argc, char *argv[]) {
        int array[MAX_LAENGE];
        int len = lese_array(array);
        print_array(array, len);
        //HIER rufe finde_minimum auf
    	int minimum = finde_minimum(array,len);
        printf("Kleinster Wert: %d\n", minimum);
        return 0;
    }
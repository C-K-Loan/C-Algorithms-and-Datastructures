#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// HIER die Funktion lineare Suche bzw. binäre Suche implementieren.
// Die Funktionen sollen in jeweils separaten Dateien abgegeben werden.
// Siehe Aufgabenblatt

/*
Hauptprogramm.


Überprüft, ob Zahlenwerten in einem Array enthalten sind

Aufruf: ./introprog_blatt04_aufgabe01_2 <max anzahl> <datei suchwerte> <max anzahl> <datei zahlen>

Ausgabe: Per Suchwert eine Zeile mit dem String:
    "<Suchwert> ja" bzw. "<Suchwert> nein"

    Also z.B. "12345 ja"
*/

int linear_search(int* array,int start, int end,int value ){ 
      int i=start;
      while (i<end) {
        if (array [i]== value) {

            return 1 ;
        }
              i++ ;

      }

      return 0;
}

int binary_search(int*array,int start, int end, int value){
    if (start == end) {

        if (array[start]== value ) {
            return 1;
        }
        else {
            return 0 ;


            }
}
  int middle= (start + end) /2;
  if(value < array[middle]) {
    end= middle -1;
  }
   else {
      start= middle;
 }
 return binary_search(array, start, end, value);
}











int main (int argc, char *argv[])
{
    if (argc!=5){
        printf ("usage: %s <max sucherte> <datei suchwerte> <max zahlen> <datei zahlen>\n", argv[0]);
        exit(2);
    }

    // HIER "array" und "suchwerte" initialsieren
    int len = // HIER "array" einlesen
    int len2 =  // HIER "suchwerte" einlesen

    for (int i=0; i<len2 ; i++) {
        // HIER Suchfunktion für suchwerte[i] aufrufen
        //Ausgabe ist entweder
        //printf("%d ja\n", suchwerte[i]);
        // oder
        //printf("%d nein\n", suchwerte[i]);
    }
    return 0;
}

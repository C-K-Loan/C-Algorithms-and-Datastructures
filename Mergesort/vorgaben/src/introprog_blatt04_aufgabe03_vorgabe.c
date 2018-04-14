#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <string.h>

/*
 TODO: Fuegen Sie hier alle benoetigten Funktionen ein,
       um Ihren jeweiligen Algorithmus zu benutzen.
*/

/*
Hauptprogramm.

Führt Laufzeitmessungen über einen Suchalgorithmus aus.

Aufruf: ./introprog_blatt04_aufgabe03_suchXXX <max suchwerte> <datei suchwerte> <max zahlen> <datei zahlen>

*/
int main (int argc, char *argv[])
{
    if (argc!=5){
        printf ("usage: %s <max suchwerte> <datei suchwerte> <max zahlen> <datei zahlen>\n", argv[0]);
        exit(2);
    }

    // Arrays anhand der Kommandozeilenparameter initialisieren
    // int *array = ...
    // int *suchwerte = ...

    // Dateien in Arrays einlesen
    // int len = ...
    // int len2 = ...


    /*
       Wie oft soll der Algorithmus ausgefuehrt werden?
       Muss fuer alle Messungen identisch sein, kann verringert
       werden wenn der Rechner zu langsam ist und dadurch die
       Ausfuehrung zu lange dauert.
       ACHTUNG: Dann muessen alle Messungen wiederholt werden!
    */
    int durchgaenge = 2000;


    // TODO: Hier den Namen des Algorithmus eintragen:
    char* algoname = "XXX Suche";

    clock_t start_ticks = clock();

    for (int repeat=0; repeat < durchgaenge; repeat++) {
        for (int i=0; i<len2; i++) {

            // TODO: HIER DEN SUCHALGORITHMUS EXAKT EINMAL AUFRUFEN:
            // z.B.: search_binary(...); ODER search_linear(...);

        }
    }
    clock_t ticks = clock() - start_ticks;
    printf("%s: %d Durchgaenge in %ju ticks, durchschnittlich %f Ticks pro Durchgang\n", algoname, durchgaenge, ticks, ticks/(durchgaenge*1.0));

    //TODO: Speicher ggf. freigeben:
    // free(array);
    // free(suchwerte);
    return 0;
}

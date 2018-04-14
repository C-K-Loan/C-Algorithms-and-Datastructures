#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>
#include <string.h>
#include <math.h>   // Definiert den speziellen Fließkommawert NAN ("Not A Number")

struct sStackElement{
    // Hier Code einfügen
};

/*
  Der Typ stack_top ist ein pointer auf ein Stack Element
*/
typedef struct sStackElement* stack_top;

/*
   Lege Element auf den Stack

   Wenn *stacktop auf NULL zeigt, ist kein Element auf dem Stack
*/
void stack_push(stack_top *stacktop, float value)
{
    // Hier Code einfügen
}

/*
   Nimm Element auf den Stack

   Wenn stack leer wird, setze *stacktop auf NULL
   
   Ist der Stack leer, gib den Fließkommawert NAN zurück
*/
float stack_pop(stack_top *stacktop)
{
    // Hier Code einfügen
    return NAN;
}

/*
   Identifiziere das Token. Unterscheide folgende Fälle:
   - Das Token ist eine Zahl: Lege es auf den Stack.
   - Das Token ist ein Operator (+, -, *):
       1. Nimm die obersten beiden Stackelemente
       2. Wende den Operator auf diese Werte an
       3. Lege das Resultat auf dem Stack ab

   Implementiere hier die Rechenoperationen (+, -, *) und lege das
   Ergebnis zurück auf den Stack. Beachte, dass du mit Floatingpointwerten
   arbeitest, z.B. auch negative Kommazahlen.
*/
void process(stack_top *stacktop, char* token)
{
    assert(token != NULL);
    // Hier Code einfügen
}


const int MAX_LINE_LENGTH=1024;
/*
 main() liest die Eingabe zeilenweise ein und zerlegt diese in einzelne getrennte Zeichenketten (Token)
 
 Diese Funktion muss nicht geändert werden.
*/
int main(int argc, char** args)
{
    stack_top stacktop = NULL;
    char line[MAX_LINE_LENGTH]; // Eingabezeile
    char* token;                // Pointer auf das aktuellen token;

    while ( fgets(line, MAX_LINE_LENGTH, stdin) ) {
        token = strtok(line, " ");

        while (token != NULL) {
            process(&stacktop, token);  // Stackoperationen durchführen
            token = strtok(NULL, " ");  // Neues Token einlesen
        }

        float result = stack_pop(&stacktop);    // Letztes Ergebnis vom Stack holen

        if (stacktop != NULL) { // Mehr Operanden als benötigt angegeben. Fehler.
            while (stacktop != NULL) {
                stack_pop(&stacktop);   //Räume Stack auf
            }
            printf("Error\n");
        } else if (result != result) {  // result ist NAN: Berechnung fehlgeschlagen  (z.b. zu wenig Operanden)
            printf("Error\n");
        } else {
            printf("%4.3f\n", result); // Gib Resultat aus
        }
    }
}

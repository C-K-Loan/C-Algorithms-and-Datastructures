    #include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_HEAP_SIZE 400

typedef struct heap heap;

/* Dieses struct definiert einen Heap

   Der Heap kann maximal MAX_HEAP_SIZE Elemente enthalten
*/
struct heap {
    int array[MAX_HEAP_SIZE];
    int size;
};

/* Stellt die Heap Bedingung wieder her, wenn der linke und rechte Unterbaum die Heap
 * Bedingung schon erfüllen.
 */
 int left(heap*h,int i){
    int l=2*i;
    
return l;
 }
 int right(heap*h,int i){
    int r=((2*i)+1);
    return r;
 }
void heapify(heap* h, int i) {
    // Hier bitte Ihr Code


/* Holt einen Wert aus dem Heap.
 *
 * Gibt einen Assert Fehler zurück wenn die Heap leer ist.
 *
 * Rückgabewert: Kleinster Wert der Heap
 */
 int left= left(h,i);
 int right=right(h,i);
 int largest=0;

 if(left<h->size && h->array[left]<h->array[i]) {
    largest=left;

 }else largest=i;
 if(right<h->size && h->array[right]<h->array[largest])
    largest=right;
if(largest!=i){
    swap(h,i,largest);
    heapify(largest);
}


}
void swap(heap*h,int i, int largest){
    int tmp=array[i];
    array[i]=array[largest];
    array[largest]=tmp;

}
int heap_extract_min(heap* h) {
    tmp=array[0];
    array[0]= h->array[h->size];
    h->size= h->size-1;
    heapify(h,0);
    return tmp;
}


/* Fügt einen Wert in den Heap ein.
 *
 * Gibt einen Assert Fehler zurück wenn die bereits Heap voll ist.
 */
void heap_insert(heap* h, int key) {
    // Hier bitte Ihr Code
    h->size=h->size+1;
    int i=h->size;
    array[h->size]=key;
    int b=i;
    i=i/2;
    while(i!=0 && array[i]<key){
        swap(h,i,b);
        b=i;
        i=i/2;
    }

}

/* Diese Funktion initialisiert die Heap-Struktur
 *
 * Rückgabewert: Pointer auf den Heap
 */
heap* heap_init() {

heap* newheap = calloc(1, sizeof(heap));
return newheap;
}

/* Programm zum Führen einer Warteliste
 *
 * Das Programm nimmt Befehle zeilenweise auf der Standardeingabe entgegen:
 * "q": Beende das Programm.
 * "f": Der nächste Passagier soll einsteigen. Das Programm gibt als Antwort die
 *      vorzugebenede Sitzreihe aus.
 * positive Ganzzahl: Ein Passagier mit dieser Sitzreihennummer wurde registriert.
 */
int main(int argc, char** argv)
{
    heap* warteliste = heap_init();
    while (1)
    {
        char string[15];
        scanf("%s",string);
        // Gehe aus dem Programm raus
        if (string[0] == 'q') {break;}
        // Hole die niedrigste Sitzreihennummer
        if (string[0] == 'f')
        {
            if (warteliste->size > 0) {
                printf("%i\n", heap_extract_min(warteliste));
            } else {
                printf("Leer!\n");
            }
            continue;
        }
        // Füge eine postive Zahl als Sitzreihennummer ein
        int input_as_integer = atoi(string);
        if (input_as_integer > 0) {
            heap_insert(warteliste, input_as_integer);
            continue;
        }
        // Bei fehlerhafter/unbekannte Eingabe
        printf("Fehler: Eingabe nicht erkannt!\n");
    }
}

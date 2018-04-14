#include <stdio.h>
#include <stdlib.h>

// Knoten im Binären Suchbaum, wobei ...
// - left und right das linke bzw. rechte Kind spezifiziert.
// - parent auf denjenigen Knoten verweist, dessen Kind dieser Knoten ist.
// - value den ganzzahligen Wert des Suchbaumknotens ist.
struct BSTNode
{
	struct BSTNode* left;		
	struct BSTNode* right;	
	struct BSTNode* parent;
	int value;
};

// Ein Binärer Suchbaum mit einem Wurzelknoten root und der Anzahl an
// Elementen im Baum.
struct BSTree
{
	struct BSTNode* root;
	int numberOfElements; 
};

// typedefs, damit man sich das "struct" sparen kann.
typedef struct BSTNode BSTNode;
typedef struct BSTree  BSTree;

// Fügt den Wert value in den Binären Suchbaum bst ein.
// Für den Suchbaum soll die Eigenschaft gelten, dass alle linken Kinder
// einen Wert kleiner gleich (<=) und alle rechten Kinder einen Wert 
// größer (>) haben.
void BST_insert_value(BSTree* bst, int value)
{
	// Hier bitte Ihr Code.
}

// Diese Funktion liefert einen Zeiger auf einen Knoten im Baum
// mit dem Wert value zurück, falls dieser existiert. Ansonsten wird
// NULL zurückgegeben.
BSTNode* findNode(BSTree* bst, int value)
{
	// Hier bitte Ihr Code.
}

// Gibt den gesamten Baum bst in "in-order" Reihenfolge aus. Die Ausgabe
// dieser Funktion muss aufsteigend soriert sein.
void BST_in_order_walk(BSTree* bst)
{
	// Hier bitte Ihr Code.
}


// Diese Funktion löscht einen Knoten im binären Suchbaum, der den Wert
// value hat, stellt die Baumstruktur wieder her und gibt in diesem 
// Falle 1 zurück. 
// Sollte Knoten den Wert value nicht enthalten, wird 0 zurückgegeben und kein
// Knoten gelöscht.
int BST_delete_value(BSTree* bst, int value)
{
	// Hier bitte Ihr Code.
}


// Löscht den gesamten Baum bst und gibt den Speicher aller Knoten frei.
void BST_delete_tree(BSTree* bst)
{
	// Hier bitte Ihr Code.
}


int main(int argc, char** args)
{
	if (argc != 2)
	{
		printf("Nutzung: %s <Dateiname>\n",args[0]);
		return 1;
	}
	// Hier bitte Ihr Code.
	return 0;
}






































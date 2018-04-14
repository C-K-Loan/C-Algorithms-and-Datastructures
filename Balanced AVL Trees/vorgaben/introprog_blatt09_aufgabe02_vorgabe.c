#include <stdio.h>
#include <stdlib.h>

// Knoten im AVL Suchbaum, wobei ...
// - left und right auf das linke bzw. rechte Kind zeigt.
// - parent auf denjenigen Knoten verweist, dessen Kind dieser Knoten ist.
// - value der ganzzahlige Wert des Knotens ist.
// - height die Höhe des Baumes unter diesem Knoten (ist immer >= 1)
// Diese Struktur darf nicht verändert werden.
struct AVLNode
{
	struct AVLNode* left;		
	struct AVLNode* right;	
	struct AVLNode* parent;
	int value;
	int height;
};

// Ein Binärer Suchbaum mit einem Wurzelknoten root und der Anzahl an
// Elementen im Baum.
struct AVLTree
{
	struct AVLNode* root;
	int numberOfElements; 
};

// typedefs, damit man sich das "struct" sparen kann.
typedef struct AVLNode AVLNode;
typedef struct AVLTree AVLTree;


// Gibt den Unterbaum von node in "in-order" Reihenfolge aus. 
// Die Ausgabe dieser Funktion muss aufsteigend soriert sein.
void AVL_in_order_walk_node(AVLNode* node)
{
	// Hier bitte Ihr Code.
}

// Gibt den gesamten AVL Baum in "in-order" Reihenfolge aus.
void AVL_in_order_walk(AVLTree* avlt)
{	
    if (avlt != NULL && avlt->root != NULL) {
        AVL_in_order_walk_node(avlt->root);
    }
}

// Falls der Baum korrekt balanciert ist, gibt die Funktion 
// die (nichtnegative) Baumhöhe zurück
// Falls der Baum nicht balanciert ist, gibt die Funktion -1 zurück
// In dieser Funktion darf das Strukturelement AVLNode.height nicht 
// verwendet werden
int AVL_is_balanced_node(AVLNode* node)
{
	if (NULL == node) {return 0;}   //nichtexistente root node -> baumhoehe 0

	int leftheight = AVL_is_balanced_node(node->left);
	if (-1 == leftheight) {return -1;}  //checke linken unterbaum

	int rightheight = AVL_is_balanced_node(node->right);
	if (-1 == rightheight) {return -1;}  //checke rechten unterbaum

    int balance = leftheight - rightheight;
    if (balance < -1 || balance > 1) {return -1;}
    //Berechen die eigene Höhe:
    int myheight = 1 + ((leftheight > rightheight)? leftheight : rightheight);
    return myheight;
}

// Gibt 1 aus, falls der Baum korrekt balanciert ist, ansonsten 0
void AVL_test_balance(AVLTree* avlt)
{
 if (AVL_is_balanced_node(avlt->root) >= 0) {printf("1\n");}
 else                                       {printf("0\n");}
}

// Diese Funktion führt eine Linksrotation auf dem angegebenen Knoten aus,
// ändert dessen Baumhöhe und die des linken Kindes
void AVL_rotate_left(AVLTree* avlt, AVLNode* node)
{
	// Hier bitte Ihr Code.
}

// Diese Funktion führt eine Rechtsrotation auf dem angegebenen Knoten aus,
// ändert dessen Baumhöhe und die des rechten Kindes
void AVL_rotate_right(AVLTree* avlt, AVLNode* node)
{
	// Hier bitte Ihr Code.
}

// Diese Funktion rebalanciert den AVL Baum, nachdem 
// der Knoten node eingefügt wurde.
void AVL_rebalance(AVLTree* avlt, AVLNode* node)
{
	// Hier bitte Ihr Code.
}

// Für den Suchbaum soll nach dem Einfügen die Eigenschaft gelten,
// dass alle linken Kinder einen Wert kleiner gleich (<=) und alle
// rechten Kinder einen Wert größer (>) haben.
//
// Zusätzlich soll sichergestellt sein, dass der Baum nach Aufruf
// korrekt balanciert ist
void AVL_insert_value(AVLTree* avlt, int value)
{
	// Hier bitte Ihr Code.
}

// Löscht den Teilbaum unterhalb des Knotens node rekursiv durch 
// "post-order" Traversierung, d.h. zurerst wird der linke und dann
// der rechte Teilbaum gelöscht. Anschließend wird der übergebene Knoten
// gelöscht.
void AVL_delete_subTree(AVLNode* node)
{
	// Hier bitte Ihr Code.
}

// Löscht den gesamten Baum AVL und gibt den Speicher aller Knoten frei.
void AVL_delete_tree(AVLTree* avlt)
{
	if(avlt != NULL && avlt->root != NULL)
	{
		AVL_delete_subTree(avlt->root);
    	avlt->root = NULL;
    	avlt->numberOfElements = 0;
	}
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

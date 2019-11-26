#include"avl.h"
int main(void) {

   struct avl *raiz = NULL;

	int datoInsertar;

	raiz = insertar(raiz, 23);
	raiz = insertar(raiz, 645);
	raiz = insertar(raiz, 5);
	raiz = insertar(raiz, 87);
	raiz = insertar(raiz, 223);
	raiz = insertar(raiz, 15);
	raiz = insertar(raiz, 698);
	raiz = insertar(raiz, 34);
	raiz = insertar(raiz, 25);


	// raiz = rotacionIzquierda(raiz);
	/*
	printf("%d - (%d)\n", raiz->dato , raiz->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->dato , raiz->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoDerecho->dato , raiz->hijoDerecho->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoDerecho->hijoDerecho->dato , raiz->hijoDerecho->hijoDerecho->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoIzquierdo->dato , raiz->hijoDerecho->hijoIzquierdo->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoIzquierdo->hijoDerecho->dato , raiz->hijoDerecho->hijoIzquierdo->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoIzquierdo->dato , raiz->hijoIzquierdo->fe);
	printf("%d - (%d)\n", raiz->hijoIzquierdo->hijoDerecho->dato , raiz->hijoIzquierdo->hijoDerecho->fe);
	//printf("sdf\n");
	//printf("%d - (%d)---\n", raiz->hijoIzquierdo->hijoIzquierdo->dato , raiz->hijoIzquierdo->hijoIzquierdo->fe);

	printf("-%d-\n", buscar(raiz, 25)); */

	PreOrden(raiz);

	return 0;
}
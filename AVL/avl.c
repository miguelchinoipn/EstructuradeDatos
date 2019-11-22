#include"avl.h"
struct avl*
insertar(struct avl *raizArbol, int datoInsertar) {

	 struct avl *nuevo = NULL;

   if (raizArbol == NULL) {

		nuevo = malloc(sizeof(struct avl));
 		if (nuevo == NULL) {
 			return NULL;
 		}
		nuevo->dato = datoInsertar;
		nuevo->fe = 0;
		nuevo->hijoDerecho = NULL;
		nuevo->hijoIzquierdo = NULL;
		return nuevo;
   }

		if (raizArbol->dato == datoInsertar) {

			return raizArbol;
		}
		if (datoInsertar > raizArbol->dato) {

			raizArbol->hijoDerecho = insertar(raizArbol->hijoDerecho, datoInsertar);

		} else {

			raizArbol->hijoIzquierdo = insertar(raizArbol->hijoIzquierdo, datoInsertar);

		}
		raizArbol->fe = calcularFE(raizArbol);
		if ((raizArbol->fe == -2) && (raizArbol->hijoIzquierdo->fe == -1)) {
			raizArbol = rotacionDerecha(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe == 2) && (raizArbol->hijoDerecho->fe == 1)) {
			raizArbol = rotacionIzquierda(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe > 1) && (raizArbol->hijoDerecho->fe < 0)) {
			raizArbol->hijoDerecho = rotacionDerecha(raizArbol->hijoDerecho);
			raizArbol = rotacionIzquierda(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		if ((raizArbol->fe < -1) && (raizArbol->hijoIzquierdo->fe > 0)) {
			raizArbol->hijoIzquierdo = rotacionIzquierda(raizArbol->hijoIzquierdo);
			raizArbol = rotacionDerecha(raizArbol);
			raizArbol->fe = calcularFE(raizArbol);
			raizArbol->hijoDerecho->fe = calcularFE(raizArbol->hijoDerecho);
			raizArbol->hijoIzquierdo->fe = calcularFE(raizArbol->hijoIzquierdo);
		}

		return raizArbol;
}

struct avl*
rotacionDerecha(struct avl *raizDesbalanceada) {

	struct avl *aux = raizDesbalanceada;
		struct avl *aux2 = NULL;
	raizDesbalanceada = raizDesbalanceada->hijoIzquierdo;

	if (raizDesbalanceada->hijoDerecho != NULL) {

		aux2 = raizDesbalanceada->hijoDerecho;
	}

	raizDesbalanceada->hijoDerecho = aux;

	raizDesbalanceada->hijoDerecho->hijoIzquierdo = aux2;

	return raizDesbalanceada;

}

struct avl*
rotacionIzquierda(struct avl *raizDesbalanceada) {

	struct avl *aux = raizDesbalanceada;
		struct avl *aux2 = NULL;
	raizDesbalanceada = raizDesbalanceada->hijoDerecho;

	if (raizDesbalanceada->hijoIzquierdo != NULL) {

		aux2 = raizDesbalanceada->hijoIzquierdo;
	}

	raizDesbalanceada->hijoIzquierdo = aux;

	raizDesbalanceada->hijoIzquierdo->hijoDerecho = aux2;

	return raizDesbalanceada;

}

int calcularAltura(struct avl *raiz){

	int alturaDerecha = 0;
	int alturaIzquierda = 0;

	if (raiz == NULL) {
		return -1;
	}

	alturaIzquierda = calcularAltura(raiz->hijoIzquierdo);
	alturaDerecha = calcularAltura(raiz->hijoDerecho);

	if (alturaIzquierda > alturaDerecha) {
		return alturaIzquierda+1;
	}
	return alturaDerecha+1;
}

int calcularFE(struct avl *raiz){

	int alturaDerecha = 0;
	int alturaIzquierda = 0;

	if (raiz == NULL) {
		return 0;
	}

	alturaIzquierda = calcularAltura(raiz->hijoIzquierdo);
	alturaDerecha = calcularAltura(raiz->hijoDerecho);

	return alturaDerecha - alturaIzquierda;
}

int buscar(struct avl *raiz, int datoABuscar){

	if (raiz == NULL) {

		return 0;
	} else if (raiz->dato == datoABuscar) {

		return 1;
	}	else if (datoABuscar < raiz->dato) {

		return buscar(raiz->hijoIzquierdo, datoABuscar);
	} else{

		return buscar(raiz->hijoDerecho, datoABuscar);
	}
}

void PreOrden(struct avl *raiz)
{
	PreOrden(raiz -> hijoIzquierdo);
	printf("%d\n",raiz -> dato);
	PreOrden(raiz -> hijoDerecho);
}


void InOrden(struct avl *raiz)
{
	InOrden(raiz -> hijoIzquierdo);
	printf("%d\n",raiz -> dato);
	InOrden(raiz -> hijoDerecho);
}

void PostOrden(struct avl *raiz)
{
	PostOrden(raiz -> hijoIzquierdo);
	printf("%d\n",raiz -> dato);
	PostOrden(raiz -> hijoDerecho);
}
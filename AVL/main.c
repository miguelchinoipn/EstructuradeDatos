
int main(void) {

   struct Nodo *raiz = NULL;

	int datoInsertar;

	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);
	scanf("%d", &datoInsertar);
	raiz = insertar(raiz, datoInsertar);


	// raiz = rotacionIzquierda(raiz);

	printf("%d - (%d)\n", raiz->dato , raiz->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->dato , raiz->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoDerecho->dato , raiz->hijoDerecho->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoDerecho->hijoDerecho->dato , raiz->hijoDerecho->hijoDerecho->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoIzquierdo->dato , raiz->hijoDerecho->hijoIzquierdo->fe);
	printf("%d - (%d)\n", raiz->hijoDerecho->hijoIzquierdo->hijoDerecho->dato , raiz->hijoDerecho->hijoIzquierdo->hijoDerecho->fe);
	printf("%d - (%d)\n", raiz->hijoIzquierdo->dato , raiz->hijoIzquierdo->fe);
	printf("%d - (%d)\n", raiz->hijoIzquierdo->hijoDerecho->dato , raiz->hijoIzquierdo->hijoDerecho->fe);
	printf("%d - (%d)---\n", raiz->hijoIzquierdo->hijoIzquierdo->dato , raiz->hijoIzquierdo->hijoIzquierdo->fe);

	printf("-%d-\n", buscar(raiz, 3));

	return 0;
}
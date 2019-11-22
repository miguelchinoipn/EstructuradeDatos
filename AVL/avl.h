#ifndef __AVL_H__
#define __AVL_H__

#include <stdio.h>
#include <stdlib.h>

struct AVL{

	int dato;
	int fe;
	struct AVL *hijoDerecho;
	struct AVL *hijoIzquierdo;
};

struct AVL* insertar();
struct AVL* rotacionDerecha();
struct AVL* rotacionIzquierda();
int calcularAltura();
int calcularFE();
int buscar();

void PreOrden(struct AVL *);
void InOrden(struct AVL *);
void PostOrden(struct AVL *);

#endif
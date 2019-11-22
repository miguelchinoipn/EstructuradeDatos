#ifndef __AVL_H__
#define __AVL_H__

#include <stdio.h>
#include <stdlib.h>

struct avl{

	int dato;
	int fe;
	struct avl *hijoDerecho;
	struct avl *hijoIzquierdo;
};

struct avl* insertar();
struct avl* rotacionDerecha();
struct avl* rotacionIzquierda();
int calcularAltura();
int calcularFE();
int buscar();

void PreOrden(struct avl *);
void InOrden(struct avl *);
void PostOrden(struct avl *);

#endif
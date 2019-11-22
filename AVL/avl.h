#ifndef __AVL_H__
#define __AVL_H__

#include <stdio.h>
#include <stdlib.h>

struct Nodo{

	int dato;
	int fe;
	struct Nodo *hijoDerecho;
	struct Nodo *hijoIzquierdo;
};

struct Nodo* insertar();
struct Nodo* rotacionDerecha();
struct Nodo* rotacionIzquierda();
int calcularAltura();
int calcularFE();
int buscar();

#endif
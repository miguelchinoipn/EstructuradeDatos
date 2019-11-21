#ifndef _LSDOBLES_H_
#define _LSDOBLES_H_

#include<stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  struct Lista *siguiente;
  struct Lista *anterior;
};

struct Lista *agregarElemento (struct Lista *, int);
struct Lista *mezclarListas (struct Lista *, struct Lista *);
void mostrarLista (struct Lista *);	//Hecho
void mostrarInversa (struct Lista *);	//Hecho
struct Lista *eliminarCola (struct Lista *);
struct Lista *eliminarCabeza (struct Lista *);
struct Lista *eliminarLista (struct Lista *);
void buscarElemento (struct Lista *, int);
struct Lista *buscarEliminar (struct Lista *, int);

#endif 
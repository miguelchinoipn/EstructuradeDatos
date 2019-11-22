//Cola main
#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include <stdlib.h>

struct Cola
{
  int dato;
  struct Cola *siguiente;
};

struct Cola *agregarElemento (struct Cola *, int);
struct Cola *mezclarListas (struct Cola *, struct Cola *);
void mostrar (struct Cola *);
void mostrarInversa (struct Cola *);
struct Cola *eliminarFinal (struct Cola *);
struct Cola *eliminarCabeza (struct Cola *);
struct Cola *eliminarCola (struct Cola *); //Elimina toda la fila
int buscarElemento (struct Cola *, int);
struct Cola *buscarEliminar (struct Cola *, int);

#endif
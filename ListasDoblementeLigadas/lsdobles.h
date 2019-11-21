#ifndef _LSDOBLES_H_
#define _LSDOBLES_H_

#include<stdio.h>
#include <stdlib.h>

struct ListaDoble
{
  int dato;
  struct ListaDoble *siguiente;
  struct ListaDoble *anterior;
};

struct ListaDoble *agregarElemento (struct ListaDoble *, int);
struct ListaDoble *mezclarListaDobles (struct ListaDoble *, struct ListaDoble *);
void mostrarListaDoble (struct ListaDoble *);
void mostrarInversa (struct ListaDoble *);
struct ListaDoble *eliminarCola (struct ListaDoble *);
struct ListaDoble *eliminarCabeza (struct ListaDoble *);
struct ListaDoble *eliminarListaDoble (struct ListaDoble *);
int buscarElemento (struct ListaDoble *, int);
struct ListaDoble *buscarEliminar (struct ListaDoble *, int);

#endif 
#ifndef __CONTIGUAS_H__
#define __CONTIGUAS_H__

#include<stdio.h>
#include<stdlib.h>
struct Contigua
{
  int *datos;			//Guarda el ni
  int actual;			//El numero de la lista en el que se encuentra
  int cuantos;			//Cantidad de elementos de la lista
};

void insertar (struct Contigua **, int);	//Funcion de insertar un elemento a la lista, (Lista, 'El elemento ques se va a agrear')

void eliminar (struct Contigua **, int);	//Funcion de eliminar un elemento a la lista, (Lista, 'El elemento ques se va a eliminar'); 'BUSCAR'

void mostrar (struct Contigua *);	//Mostrar la lista (Lista)

#endif

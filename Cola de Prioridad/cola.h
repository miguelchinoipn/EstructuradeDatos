#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	Elem dato;
	int prioridad;
	struct Nodo *sig;
}*ApNodo;

typedef struct CNodo{
	ApNodo sal;
	ApNodo ent;	
}*ColaP;

typedef int Elem;

ColaP nuevaP();
int esnuevaP(ColaP p);
ColaP formarP(ColaP p, Elem e);
Elem primeroP(ColaP p);
ColaP desformarP(ColaP p);
ColaP ImpColaP(ColaP p);
void ImpElem(Elem e);
int esMoI(Elem e1, Elem e2);
int esMenor(Elem e1,Elem e2);
int esIgual(Elem e1, Elem e2);
int establecarPrioridad(Elem e);

#endif
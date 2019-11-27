#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include <stdlib.h>

struct Cola{
	int dato;
	int prioridad;
	struct Nodo *sig;
};

struct ColaPrioridad{
	struct Cola *sal;
	struct Cola *ent;	
};

struct ColaPrioridad *nuevaP();
int esnuevaP(struct ColaPrioridad *p);
struct ColaPrioridad *formarP(struct ColaPrioridad *p, int e);
int primeroP(struct ColaPrioridad *p);
struct ColaPrioridad *desformarP(struct ColaPrioridad *p);
struct ColaPrioridad *Impstruct(*struct ColaPrioridad *p);
void Impint(int e);
int esMoI(int e1, int e2);
int esMenor(int e1,int e2);
int esIgual(int e1, int e2);
int establecarPrioridad(int e);

#endif
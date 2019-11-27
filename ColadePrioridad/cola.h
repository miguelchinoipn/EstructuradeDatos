#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include <stdlib.h>
  typedef struct Nodo
{
  int dato;
   int prioridad;
   struct Nodo *sig;
 } *ApNodo;
 typedef struct CNodo
{
  ApNodo sal;
  ApNodo ent;
} *ColaP;
 ColaP nuevaP ();
int esnuevaP (ColaP p);
ColaP formarP (ColaP p, int e);
int primeroP (ColaP p);
ColaP desformarP (ColaP p);
ColaP ImpColaP (ColaP p);
void Impint (int e);
int esMoI (int e1, int e2);
int esMenor (int e1, int e2);
int esIgual (int e1, int e2);
int establecarPrioridad (int e);
 
#endif

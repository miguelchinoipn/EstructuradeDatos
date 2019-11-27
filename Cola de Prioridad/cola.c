#include"cola.h"

ColaP nuevaP(){
  ColaP p=(ColaP)malloc(sizeof(struct CNodo));
  p->sal=NULL;p->ent=NULL;
  return p;
}

int esnuevaP(ColaP p){
  return((p->ent==NULL)&&(p->sal==NULL));
}

ColaP formarP(ColaP p, Elem e){
  ApNodo t=(ApNodo)malloc(sizeof(struct Nodo));
  t->dato=e;t->sig=NULL;t->prioridad=establecarPrioridad(e);
  if(esnuevaP(p)){
    p->sal=p->ent=t;
  }else{
    if(t->prioridad>=p->sal->prioridad){//Caso nuevo nodo MAYOR a nodo saliente
      t->sig=p->sal;
      p->sal=t;
    }else if(t->prioridad<p->ent->prioridad){//Caso nuevo nodo MENOR a nodo entrante
      p->ent->sig=t;
      p->ent=t;
    }else{ //Caso nuevo nodo esta en medio de la cola
      ApNodo aux=p->sal;
      int i=1;
      while(i){
        if((t->prioridad<aux->prioridad) && (t->prioridad>=aux->sig->prioridad)){
          t->sig=aux->sig;
          aux->sig=t;
          i=0;
        }else{
          aux=aux->sig;
        }
      }
    }
  }
  return p;
}

Elem primeroP(ColaP p){
  return p->sal->dato;
}

ColaP desformarP(ColaP p){
  ApNodo t=p->sal;
  if(p->sal==p->ent)
    p=nuevaP();
  else
    p->sal=p->sal->sig;
  free(t);
  return p;
}

ColaP ImpColaP(ColaP p){
  ColaP c=nuevaP();
  while(!esnuevaP(p)){
    c=formarP(c,primeroP(p));
    ImpElem(primeroP(p));
    p=desformarP(p);
  }
  free(p);
  return c;
}

void ImpElem(Elem e){
  printf("%d\n",e);
}

int esMoI(Elem e1, Elem e2){
  return e1>=e2;
}

int esMenor(Elem e1,Elem e2){
  return e1<e2;
}

int esIgual(Elem e1, Elem e2){
  return e1==e2;
}

int establecarPrioridad(Elem e){
  return e;
}
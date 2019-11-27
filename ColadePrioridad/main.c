#include"cola.h"

int main(){
  puts("Cola Original:");
  struct ColaPrioridad *p=formarP(formarP(formarP(nuevaP(),3),2),1);
  p=ImpColaP(p);
  puts("Agregando 4 a la Cola:");
  p=formarP(p,4);
  p=ImpColaP(p);
  puts("Agregando 2 a la Cola:");
  p=formarP(p,2);
  p=ImpColaP(p);
  puts("Agregando 0 a la Cola:");
  p=formarP(p,0);
  p=ImpColaP(p);
  system("pause");
  return 0;
}
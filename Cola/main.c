#include"cola.h"

int
main (void)
{

  struct Cola *cola1 = NULL;
  struct Cola *cola2 = NULL;
  struct Cola *cola3 = NULL;

  int max, numero,busqueda = 0;

  //Ingresa el numero total de nodos en la cola
  scanf ("%d", &max);
  for (int i = 0; i < max; i++)
  {
      scanf ("%d", &numero);
      cola1 = agregarElemento (cola1, numero);
  }
  //Ingresa el numero total de nodos en la cola2
  scanf ("%d", &max);
  for (int i = 0; i < max; i++)
  {
    scanf ("%d", &numero);
    cola2 = agregarElemento (cola2, numero);
  }

  mostrar (cola1);
  printf ("\n\n");

  mostrar (cola2);
  printf ("\n\n");;

  cola3 = mezclarCola (cola1, cola2);
  
  mostrar (cola3);
  printf ("\n\n");

  mostrarInversa (cola3);
  printf ("\n\n");

  //Eliminamos el ultimo elemento de la cola 3
  cola3 = eliminarFinal (cola3);

  mostrar (cola3);
  printf ("\n\n");

  //Eliminamos el primer elemento de cola 3
  cola3 = eliminarCabeza (cola3);

  mostrar (cola3);
  printf ("\n\n");

  //Buscamos un Elemento ingresado en la cola3 
  scanf ("%d", &numero);
  busqueda = buscarElemento (cola3, numero);
  printf("Si es 1 se encontro, si es 0, no se pudo encontrar: %d\n\n",busqueda);

  mostrar (cola3);
  printf ("\n\n");

  //Buscamos un Elemento y lo ELIMINAMOS de la cola3 
  scanf ("%d", &numero);
  cola3 = buscarEliminar (cola3, numero);

  mostrar (cola3);
  printf ("\n\n");

  //Eliminamos toda la cola
  cola3 = eliminarCola (cola3);
  printf ("cola Eliminada: ");
  mostrar (cola3);
  printf ("\n");

  return 0;
}
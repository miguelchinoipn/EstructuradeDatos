#include"lsdobles.h"

struct Lista *
agregarElemento (struct Lista *lista, int dato)
{

  //Agrega elementos al final de la lista
  struct Lista *aux;
  struct Lista *nuevo = NULL;
  
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  nuevo->dato = dato;
  nuevo->siguiente = NULL;

  if (lista == NULL)
  {
    nuevo->anterior = NULL;
    lista = nuevo;
  }

  else
  {
   aux = lista;
   while (aux->siguiente != NULL)
	 {
	  aux = aux->siguiente; 
	 }

  aux->siguiente = nuevo;
  nuevo->anterior = aux;

 }
  return lista;
}

/*struct Lista *
agregarElemento (struct Lista *lista, int dato) 
{
  
    //Agrega elementos al inicio de la lista
  struct Lista *nuevo = NULL;
  
nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  
if (nuevo == NULL)
    {
      
return NULL;
    
}
  
nuevo->dato = dato;
  
nuevo->siguiente = lista;
  
nuevo->anterior = NULL;
  
if (lista == NULL)
    {
      
return nuevo;
    
}
  
  else
    {
      
lista->anterior = nuevo;
    
}
  
return nuevo;
} */



void
mostrarLista (struct Lista *lista)
{
  while (lista != NULL)
  {
    printf ("%d ", lista->dato);
    lista = lista->siguiente;
  }
}


struct Lista *
mezclarListas (struct Lista *lista1, struct Lista *lista2)
{
  struct Lista *ListaMezclada = NULL;

  while (lista1 != NULL || lista2 != NULL)
  {
    if (lista1 != NULL)
    {
    ListaMezclada = agregarElemento (ListaMezclada, lista1->dato);
    lista1 = lista1->siguiente;
	   }
    
    if (lista2 != NULL)
	  {
	   ListaMezclada = agregarElemento (ListaMezclada, lista2->dato);
	   lista2 = lista2->siguiente;
	  }
  }
  return ListaMezclada;
}


void
mostrarInversa (struct Lista *lista)
{

  struct Lista *aux = NULL;
  aux = lista;
  while (aux->siguiente != NULL)
  {
    aux = aux->siguiente;
  }

  while (aux != NULL)
  {
    printf ("%d ", aux->dato);
    aux = aux->anterior;
  }
}


struct Lista *
eliminarCola (struct Lista *lista)
{

  struct Lista *aux = NULL;
  struct Lista *aux2 = NULL;
  struct Lista *aux3 = NULL;

  aux3 = lista;
  aux2 = lista;
  aux = lista;

  while (aux->siguiente != NULL)
  {
    aux = aux->siguiente;
  }

  while (aux2->siguiente != aux)
  {
    aux2 = aux2->siguiente;
  }

  while (aux3->siguiente != aux2)
  {
    aux3 = aux3->siguiente;
  }

  aux2->siguiente = NULL;
  aux2->anterior = aux3;
  aux3->siguiente = aux2;

  free (aux);

  return lista;
}


struct Lista *
eliminarCabeza (struct Lista *lista)
{
  struct Lista *aux = NULL;

  aux = lista;
  lista = lista->siguiente;
  lista->anterior = NULL;

  free (aux);

  return lista;
}


struct Lista *
eliminarLista (struct Lista *lista)
{

  struct Lista *aux = NULL;
  aux = lista;

  while (lista != NULL)
  {
    lista = lista->siguiente;
    free (aux);
  }

return lista;
}


int
buscarElemento (struct Lista *lista, int dato)
{

  struct Lista *aux = NULL;
  int band = 0;

  aux = lista;
  while (aux != NULL)
  {
   if (aux->dato == dato)
	 {
	  //printf (" %d :)! \n", aux->dato);
	  band = 1;
	  return 1;
    break;
	 }
  aux = aux->siguiente;
  }

  if (band == 0)
  {
    //printf ("¡%d :(!! \n", dato);
    return 0;
  }

}


struct Lista *
buscarEliminar (struct Lista *lista, int dato)
{

  struct Lista *aux = NULL;
  struct Lista *aux2 = NULL;

  int band = 0;
  aux = lista;
  aux2 = lista;

  while (aux != NULL)
  {
    if (aux->dato == dato)
	  {
	   while (aux2->siguiente != aux)
	    {
	      aux2 = aux2->siguiente;
	    }

	  aux2->siguiente = aux->siguiente;
	  
    free (aux);
	  printf ("%d Eliminado!! \n", dato);

	  band = 1;
	  break;
	  }

    aux = aux->siguiente;
  }

  if (band == 0)
  {
  printf ("¡%d :(!! \n", dato);
  }
return lista;
}

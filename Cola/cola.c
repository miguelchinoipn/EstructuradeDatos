#include"cola.h"

struct Cola *
agregarElemento (struct Cola *lista, int dato)
{

  //Agrega elementos al final de la lista
  struct Cola *aux;

  struct Cola *nuevo = NULL;

  nuevo = (struct Cola *) malloc (sizeof (struct Cola));

  nuevo->dato = dato;

  nuevo->siguiente = NULL;

  if (lista == NULL)
    {

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

    }

  return lista;
}


void
mostrar (struct Cola *lista)
{

  while (lista != NULL)
    {

      printf ("%d ", lista->dato);

      lista = lista->siguiente;

    }
}

struct Cola *
mezclarCola (struct Cola *lista1, struct Cola *lista2)
{

  struct Cola *ColaMezclada = NULL;


  while (lista1 != NULL || lista2 != NULL)
    {

      if (lista1 != NULL)
	{

	  ColaMezclada = agregarElemento (ColaMezclada, lista1->dato);

	  lista1 = lista1->siguiente;

	}

      if (lista2 != NULL)
	{

	  ColaMezclada = agregarElemento (ColaMezclada, lista2->dato);

	  lista2 = lista2->siguiente;

	}

    }

  return ColaMezclada;
}

void
mostrarInversa (struct Cola *lista)
{
  if (lista)
    {
      mostrarInversa (lista->siguiente);
      printf ("%d ", lista->dato);
    }
}

struct Cola *
eliminarFinal (struct Cola *lista)
{
  struct Cola *aux = NULL;
  struct Cola *aux2 = NULL;
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
  aux2->siguiente = NULL;
  free (aux);
  return lista;
}

struct Cola *
eliminarCabeza (struct Cola *lista)
{
  struct Cola *aux = NULL;
  aux = lista;
  lista = lista->siguiente;
  free (aux);
  return lista;
}

struct Cola *
eliminarCola (struct Cola *lista)
{
  struct Cola *aux = NULL;
  aux = lista;
  while (lista != NULL)
    {
      lista = lista->siguiente;
      free (aux);
    }
  return lista;
}

int
buscarElemento (struct Cola *lista, int dato)
{
  struct Cola *aux = NULL;
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

struct Cola *
buscarEliminar (struct Cola *lista, int dato)
{
  struct Cola *aux = NULL;
  struct Cola *aux2 = NULL;
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

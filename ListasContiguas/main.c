/**
Codigo de Listas Contiguas comentado...
*/

#include<stdio.h>
#include<stdlib.h>
struct Contigua
{
  int *datos; //Guarda el ni
  int actual; //El numero de la lista en el que se encuentra
  int cuantos; //Cantidad de elementos de la lista
};

void insertar (struct Contigua **, int); //Funcion de insertar un elemento a la lista, (Lista, 'El elemento ques se va a agrear')
void eliminar (struct Contigua **, int);//Funcion de eliminar un elemento a la lista, (Lista, 'El elemento ques se va a eliminar'); 'BUSCAR'
void mostrar (struct Contigua *); //Mostrar la lista (Lista)

void
insertar (struct Contigua **lista, int dato)
{
  int *temporal = NULL; //Puntero donde se va a guardar los numero temporalmente
  int i = 0;
  if (lista == NULL) //Si no hay lista
    {
      return;
    }
  if (*lista == NULL) //Si la lista esta vacia
    {
      *lista = (struct Contigua *) malloc (sizeof (struct Contigua)); //Creas un espacio de memoria correspondiente a la estructura
    
      if (*lista == NULL) // Si esta vacia es por que no se pudo crear un espacio por falta de memoria
		{
	  	return;
		}

      (*lista)->datos = (int *) malloc (sizeof (int) * 8); //El campo 'datos' va a ser 8
    
      if ((*lista)->datos == NULL) //Si no se pudo crear el numero de datos
		{
	  	free (*lista); //Elimina la lista
	  	return; //Regresa
		} 
    
      (*lista)->cuantos = 8;	/*<- inicia con ocho lugares */
      (*lista)->actual = 0;	/*<- es el primer dato, posición cero */
      *((*lista)->datos) = dato;	/*<- se coloca el dato en la primera posición */

      return;
    }
//Si la lista NO esta vacia
  if ((*lista)->cuantos == (*lista)->actual + 1) //WHY
    {
    
      /* esta llena y hay que pasar los datos a un lugar más grande, del doble de tamaño */
    
      temporal = (int *) malloc (sizeof (int) * (*lista)->cuantos * 2); //Creamos una lista al doble de la capacidad de la original
    
      if (temporal == NULL) //Si no se pudo crear, regresate
		  {
	  	return;
		  }

      for (i = 0; i < (*lista)->cuantos; i++) //Leemos toda la lista y la copiamos en la nueva lista (llamada temporal)
		  {
	  	*(temporal + i) = *((*lista)->datos + i); //el '+ i' es para ir incrementando ambas listas
		  }

      free ((*lista)->datos);  //Eliminamos TODOS los datos de la lista
      (*lista)->datos = temporal;
      (*lista)->cuantos = (*lista)->cuantos * 2; //Multiplicamos por dos la cantidad actual de elemenyos en la lista
    }
  (*lista)->actual = (*lista)->actual + 1; //Por que se aunmenta 1
  *((*lista)->datos + (*lista)->actual) = dato; //Te paras en datos, incrementas actual y guardas el nuevc daro
}

/**
 Elimina la primera aparición de 'dato'
 en la lista.
*/
void
eliminar (struct Contigua **lista, int dato)
{
  int i = 0;
  int *temporal = NULL;
  if (lista == NULL) //Si no hay lista
    {
      return;
    }
  if ((*lista) == NULL) //Si la lista esta vacia
    {
      return;
    }
  if ((*lista)->datos == NULL) //Si la lista no tiene datos
    {
      return;
    }

  for (i = 0; i <= (*lista)->actual; i++)  ////NO ENTIENDO
    {
      	if (*((*lista)->datos + i) == dato){
	  		(*lista)->actual--;
	  		break;
		}
    }

  for (; i <= (*lista)->actual; i++)
    {
      *((*lista)->datos + i) = *((*lista)->datos + i + 1);
    }

  if ((*lista)->actual < (*lista)->cuantos / 2)
    {
      temporal = (int *) malloc (sizeof (int) * (*lista)->cuantos / 2);
      if (temporal == NULL)
	{
	  return;
	}
      for (i = 0; i <= (*lista)->actual; i++)
	{
	  *(temporal + i) = *((*lista)->datos + i);
	}
      free ((*lista)->datos);
      (*lista)->datos = temporal;
      (*lista)->cuantos = (*lista)->cuantos / 2;
    }

}

void
mostrar (struct Contigua *lista)
{
  int i = 0;
  if (lista == NULL)
    {
      printf ("\n");
      return;
    }
  for (i = 0; i < lista->actual; i++)
    {
      printf ("%d,", *(lista->datos + i));
    }
  printf ("%d\n", *(lista->datos + lista->actual));
}

int
main (void)
{
  struct Contigua *lista = NULL;

  insertar (&lista, 1);
  insertar (&lista, 2);
  insertar (&lista, 3);
  insertar (&lista, 4);
  insertar (&lista, 5);
  insertar (&lista, 6);
  insertar (&lista, 7);
  insertar (&lista, 8);
  insertar (&lista, 9);
  insertar (&lista, 239);
  insertar (&lista, 9234);

  mostrar (lista);
  
  eliminar (&lista, 1);
  eliminar (&lista, 3);
  eliminar (&lista, 5);
  eliminar (&lista, 7);
  eliminar (&lista, 8);
  eliminar (&lista, 9);
  mostrar (lista);
  return 0;
}
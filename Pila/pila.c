#include"pila.h"
struct Stack *
Push (struct Stack *stack, int data)
{
  struct Stack *new = NULL;
  new = (struct Stack *) malloc (sizeof (struct Stack));
  new->data = data;
  new->next = stack;
  return new;
}

struct Stack *
Pop (struct Stack *stack)
{
  struct Stack *aux = stack;
  printf ("%d ", aux->data);
  stack = stack->next;
  free (aux);
  return stack;
}

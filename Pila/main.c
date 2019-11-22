#include"pila.h"

int
main (void)
{
  struct Stack *stack = NULL;
  int max, num;
  scanf ("%d", &max);
  for (int i = 0; i < max; ++i)
    {
      scanf ("%d", &num);
      stack = Push (stack, num);
    }
  printf ("\n\n");
  for (int i = 0; i < max; ++i)
    {
      stack = Pop (stack);
    }
  printf ("\n");
  return 0;
}

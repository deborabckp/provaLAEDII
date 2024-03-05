/*Implemente a função recursiva a seguir definida por A(m, n) definido recursivamente da seguinte
forma:
(a) n + 1, se m = 0;
(b) A(m − 1, 1), se m > 0, n = 0;
(c) A(m − 1, A(m, n − 1)), se m > 0 e n > 0.
Crie uma função auxiliar que recebe dois inteiros a e b e apresenta todos os resultados para A(x, y)
de forma que x < a e y < b */

#include <stdio.h>

int A(int m, int n)
{

  if (m == 0)
  {

    return n + 1;
  }
  else
  {
    if (m > 0 && n == 0)
    {
      return A(m - 1, 1);
    }
    else
    {
      if (m > 0 && n > 0)
      {
        return A(m - 1, A(m, n - 1));
      }
    }
  }
}

void aux(int a, int b)
{

  int x, y;

  for (x = 0; x < a; x++)
  {
    for (y = 0; y < b; y++)
    {
      printf("A(%d, %d) = %d\n", x, y, A(x, y));
    }
  }
}

int main()
{

  int m, n;

  printf("\nDigite dois valores: \n ");
  scanf("%d %d", &m, &n);

  printf("A(%d, %d) = %d\n", m, n, A(m, n));
  aux(m, n);
  return 0;
}
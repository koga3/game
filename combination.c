#include <stdio.h>

int C(int n, int r)
{
  if (r == 0 || n == r)
  {
    return 1;
  }
  else if (r == 1)
  {
    return n;
  }
  else
  {
    return C(n - 1, r - 1) + C(n - 1, r);
  }
}

int input(char c)
{
  int n = -1, i;
  do
  {
    printf("%c = ", c);
    i = scanf("%d", &n);
    if (i != 1)
    {
      printf("Invalid input\n");
      scanf("%*s");
    }
    else if (n < 0)
    {
      printf("Invalid input\n");
    }
  } while (n < 0);

  return n;
}

int main(void)
{
  int n, r;
  do
  {
    n = input('n');
    r = input('r');
    if (n < r)
    {
      printf("Invalid input\n");
    }
  } while (n < r);
  printf("C(n,r) = %d", C(n, r));

  return 0;
}
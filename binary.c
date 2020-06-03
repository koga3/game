#include <stdio.h>

int input(char c);
void binary(int x);

int main() {
  int n = input('n');
  binary(n);

  return 0;
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
  } while (i != 1);

  return n;
}

void binary(int x){
  printf("%d (10) = ", x);
  for (int i = 31; i >= 0; i--)
  {
    int a = (x >> i) & 1;
    printf("%d", a);
  }
  printf(" (2)\n");
}
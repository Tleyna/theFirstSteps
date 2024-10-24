#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int a);

int main(void)
{
  int number;
  printf("Введи число: ");
  scanf("%d", &number);

  printf(" %s\n", isPrime(number) ? "true" : "false");
  return 0;
}

bool isPrime(int a)
{
  if (a <= 1)
  {
    return false;
  }
  else
  {
    if (a > 1)
    {
      for (int i = 2; i <= sqrt(a); i++)
      {
        if (a % i == 0)
          return false;
      }
    }
    return true;
  }
}
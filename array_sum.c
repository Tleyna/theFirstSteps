#include <stdio.h>

int main(void)
{
  int number[5];

  printf("Ведите 5 чисел: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &number[i]);
  }

  printf("Сумма твоих чисел: %d\n",number[0] + number[1] + number[2] + number[3] + number[4]);
}
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int number[10];
  int min, max;

  printf("Введите 10 чисел: ");
  scanf("%d", &number[0]);
  min = max = number[0];

  for (int i = 1; i < 10; i++)
  {
    scanf("%d", &number[i]);

    if (number[i] > max)
    {
      max = number[i];
    }
    if (number[i] < min)
    {
      min = number[i];
    }
  }
  printf("Большее число: %d\n", max);
  printf("Меньшее число: %d\n", min);
  return 0;
}
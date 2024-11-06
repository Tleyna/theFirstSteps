#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int array[7];
  int sum = 0;
  float average;

  printf("Введите семь чисел: ");

  for (int i = 0; i < 7; i++)
  {
    scanf("%d", &array[i]);
    sum += array[i];
  }

  average = (float)sum / 7;
  printf("Сумма чисел: %d\n", sum);
  printf("Среднее значение: %.2f\n", average);
  return 0;
}
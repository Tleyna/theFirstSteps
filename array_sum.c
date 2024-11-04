#include <stdio.h>

int main(void)
{
  int number[5];
  int sum = 0;

  printf("Введите пять чисел: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &number[i]);
    sum += number[i];
  }
  printf("Сумма твоих чисел %d\n", sum);
  return 0;
  
}
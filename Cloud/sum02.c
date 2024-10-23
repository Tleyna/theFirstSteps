#include <stdio.h>

int sumEvenNumbers(int n);

int main(void)
{
    int number;
    printf("Введи число: ");
    scanf("%d", &number);

    printf("Сумма: %d\n", sumEvenNumbers(number));

}

int sumEvenNumbers(int n)
{
    int result = 0;
    for (int i =0; i <=n; i++)
    {
        if (i % 2 != 0) {
            result += i;
        }
    }
    return result;
}

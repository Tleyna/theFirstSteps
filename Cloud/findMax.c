#include <stdio.h>

int findMax(int a, int b);

int main(void)
{
    int number1;
    int number2;

    printf("Number1: ");
    scanf("%d", &number1);

    printf("Number2: ");
    scanf("%d", &number2);

    printf("%d\n", findMax(number1, number2));
}

int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

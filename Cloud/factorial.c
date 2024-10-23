#include <stdio.h>

int factorial(int n);

int main(void)
{
    int number;

    printf("Number: ");
    scanf("%d", &number);

    printf("Факториал %d = %d\n", number, factorial(number));

}

int factorial(int n)
{
    int result = n;
    for (int i = n - 1; i > 1; i--)
    {
        result = result * i;
    }
    return result;
}


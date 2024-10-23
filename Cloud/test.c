
#include <stdio.h>
//вывести числа от 1 до 5 на новой строке каждое

void printNumber(int number);

int main(void)
{
    int number;
    printf("number: ");
    scanf("%d", &number);

    printNumber(number);
}

void printNumber(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%i\n", i + 1);
    }
}

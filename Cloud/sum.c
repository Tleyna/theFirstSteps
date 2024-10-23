#include <cs50.h>
#include <stdio.h>

void addNumber(int number1, int number2);

int main(void)
{
    int x = get_int("Number 1: ");
    int y = get_int("Number 2: ");
    addNumber(x, y);
}

void addNumber(int number1, int number2)
{
    int sum = number1 + number2;
    printf("Сумма: %i\n", sum);

}

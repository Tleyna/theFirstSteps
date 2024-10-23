#include <cs50.h>
#include <stdio.h>

void printString(int space, int octothorpe);
void printStringInvert(int space, int octothorpe);
void printRow(int row);

int main(void)
{
    int number = get_int("Number: ");
    printRow(number);
}

void printRow(int row)
{
    int sum;
    for (int j = 0; j < row; j++)
    {
        sum = j + 1;
        printString(row - sum, sum); // верхняя левая //
        printStringInvert(row - sum, sum); // верхняя правая //
        printf("\n");
    }

    for (int a = 0; a < row; a++)
    {
        sum = a + 1;
        printString(a, row - a); // нижняя левая //
        printStringInvert(a, row - a); // нижняя правая //
        printf("\n");
    }
}

void printString(int space, int octothorpe)
{
    for (int b = 0; b < space; b++)
    {
        printf(" ");
    }

    for (int i = 0; i < octothorpe; i++)
    {
        printf("#");
    }
}

void printStringInvert(int space, int octothorpe)
{
    for (int i = 0; i < octothorpe; i++)
    {
        printf("#");
    }

    for (int b = 0; b < space; b++)
    {
        printf(" ");
    }
}

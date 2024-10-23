#include <stdio.h>

int sum(int n);

int main(void)
{
    int number;

    printf("Number: ");
    scanf("%d", &number);

    printf("Сумма равняется %d\n", sum(number));

}

int sum(int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += i;
        printf("Промежуточный результат %d\n", result);
    }
    return result;
}

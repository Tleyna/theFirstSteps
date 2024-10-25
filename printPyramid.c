#include <stdio.h>

void printString(int space, int hash);
void printRow(int height);

int main(void)
{
  int height;
  printf("Height: ");
  scanf("%d", &height);

  printRow(height);
}

void printString(int space, int hash)
{
  for (int i = 0; i < space; i++)
  {
    printf(" ");
  }

  for (int j = 0; j < hash; j++)
  {
    printf("•");
  }
  // printf("\n");
}

void printRow(int height)
{
  for (int i = 0; i < height; i++)
  {
    int symbol = i + 1;

    printString(height - symbol, symbol);
    printf("♥");
    printString(0, symbol);
    printf("\n");
  }
}
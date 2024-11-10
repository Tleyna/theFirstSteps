#include <stdio.h>
#include <string.h>
#include <ctype.h>

int calcScore (char word[]);
void win (int score1, int score2);

int main (void)
{
    //Два слова
    char word1[20];
    char word2[20];

    printf("Player1: ");
    scanf("%s", word1);

    printf("Player2: ");
    scanf("%s", word2);

    int score1 = calcScore(word1);
    int score2 = calcScore(word2);

    win(score1, score2);
    scanf("%s", word1);
}

int calcScore (char word[])
{
   int point[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
   int score = 0; 

   for (int i = 0; i < strlen(word); i++)
   {
    //меняем высоту буквы
    char uppercase_letter = toupper(word[i]);
    //ищем порядковый номер буквы 
    int index = uppercase_letter - 'A';
    //рассчитываем балл для слова
    score += point[index];
   }
   return score;
}

void win (int score1, int score2)
{
    if (score1 > score2)
    {
        printf("Win 1 player!\n");
    }
    else if (score1 < score2)
    {
        printf("Win 2 player!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
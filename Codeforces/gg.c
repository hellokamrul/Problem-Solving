#include <stdio.h>
//using namespace std;
void printPattern(char ch);
int main()
{
    char symbol;
    printf("Enter a symbol you want to make pattern : ");
    scanf("%c", &symbol);
    printPattern(symbol);
}
void printPattern(char ch)
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}


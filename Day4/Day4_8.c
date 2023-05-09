#include<stdio.h>

//accept a character from user and display if it is alphaet also display if not alphabet

int main()
{
    char ch;
    printf("Specify a character \n");
    //scanf("%c",&ch);
    ch = getchar();
    if((ch>=65 &&ch<=90) || (ch>=97 &&ch<=122))
    {
        printf("Character is alphabet\n");
    }
    else
    {
        printf("Character is not a alphabet\n");
    }
}
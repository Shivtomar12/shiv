#include<stdio.h>

//accept a character from user and conclude it is alphabet

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
}
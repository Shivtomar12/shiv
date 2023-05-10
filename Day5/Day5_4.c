#include<stdio.h>

int main()
{
    char ch;
    printf("Specify a character \n");
    ch = getchar();

    if(ch>=65 && ch<=90)
        printf("Upper Case Character\n");
    else if(ch>=97 && ch<=122)
        printf("lower Case Character\n");
    else if(ch>=48 && ch<=57)
        printf("Digit Character\n");
    else
        printf("Special Symbol\n");

    printf("Outside if .....");
}
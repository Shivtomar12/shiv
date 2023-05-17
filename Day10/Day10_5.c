#include<stdio.h>

int main()
{
    static int x=3;
    if(x--)
    {
        main();
    } 
    printf("%4d",x);
}
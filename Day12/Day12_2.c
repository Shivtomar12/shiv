#include<stdio.h>

int main()
{
    volatile int i=2;
    printf("%d %d %d \n",i++,++i,i++);//arguments will be processed from right to 
                       //  4   ,5 , 2   //i=4 //i=5  

}
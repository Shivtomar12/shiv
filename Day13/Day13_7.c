#include<stdio.h>

int main()
{
    fun();        
}

void fun()
{
    int *p ;
    p =(int *)malloc(sizeof(int)*5);
}//on exit of function p will be released which will cause to memory leakage
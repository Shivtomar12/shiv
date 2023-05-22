#include<stdio.h>

int main()
{
    fun();        
}

void fun()
{
    int *p ;
    p =(int *)malloc(sizeof(int)*5);
}
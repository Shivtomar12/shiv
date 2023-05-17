#include<stdio.h>

void fun()
{
    printf("inside fun() \n");
    fun(); //call to a function within its own definition //recursion
}

int main()
{
    fun();
}


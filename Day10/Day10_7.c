#include<stdio.h>

int main()
{
    int num = 23;
    printf("num =%d \n",num);
    fun(&num);
    printf("num =%d \n",num);

}

void fun(int *ptr)
{
    *ptr = *ptr + 10;
}
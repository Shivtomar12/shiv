#include<stdio.h>

/* int main()
{
    test();
}

void test()
{
    static int x ;
    printf("x = %d \n",x); //default value 0 if not initialised at the time of declartion
} */


int main()
{
    //printf("x = %d \n",x); //scope is limited to block in which declared
    test();
    test();
    test();
}

void test()
{
    int a=3;
    int b=a;
    //static int p =a; //static variable is supposed to be initialised with constant
    static int x =10; //static variable will receive memory on first invocation of function in which it is declared
    printf("x = %d \n",x);
    x+=20;
    //x=11; if static variable is initialised other than declartion line then it spoils a nature of static
}
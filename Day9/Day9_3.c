#include<stdio.h>
void test_1();
void test_2();

int x ; //memory will be given from data section
        //default value will be zero
extern int z;
int main()
{
    //extern int z; //it pure declaration of z
    printf("main x=%d &x=%u \n",x,&x);
    test_1();
    test_2();
    printf("main x=%d &x=%u \n",x,&x); //x=20
    printf("test_2 z=%d &z=%u \n",z,&z);
}

void test_1()
{
    int x=2;
    //extern int z;
    printf("test_1 x=%d &x=%u \n",x,&x); //x=2;
    x=x+20; //x=22
    printf("test_2 z=%d &z=%u \n",z,&z);
}

int z = 11; //declaration//definition//initialsation

void test_2()
{
    printf("test_2 x=%d &x=%u \n",x,&x);    //x=0
    x= x+ 20;//x=20 
    printf("test_2 z=%d &z=%u \n",z,&z);
}
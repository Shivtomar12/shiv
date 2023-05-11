#include<stdio.h>
//global pure declaration

//RED here is not assigned wit h12 infact RED identifier will represent 12 now
enum colors{RED,BLUE,GREEN,YELLOW}; //RED,BLUE etc here ar eenumarated fields

enum days{SUN,MON,TUE,WED} ;

int main()
{    //local delcaration 
    enum months{JAN,FEB,MAR,APR};

    enum colors c1; //c1 here will receive 4 bytes of memory 
    enum days d1;   //d1 here will receive 4 bytes of memory 
    enum months m1; //m1 here will receive 4 bytes of memory 

    printf("value of red = %d\n",RED);
    printf("value of blue = %d\n",BLUE);
    printf("value of green = %d\n",GREEN);
    
    //RED++; //0++ //will cause to compile time error lvalue error

    c1 = BLUE;  //c1 here is designed to store any member from enum colors
    printf("c1 =%d \n",c1); //c1=1

    m1 = JAN; //m1 here is designed to store any one of member from enum months
    printf("m1 =%d \n",m1); //c1=1

}


void test()
{
    enum colors c2;
    enum days d2;
    enum months m2; //enum months is locally declared hence test developer can not use enum months data type
}
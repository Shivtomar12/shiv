#include<stdio.h>
//int printf(const char *, ...);

void display(void); //declaration

int main()
{

    display(); //call 
    display(); //call 
    display(); //call 
    return 0;
}//calling function

//function may not return value
void display(void) //function may not take argument
{
    printf("Inside display() \n");
}//called function //definition of function 
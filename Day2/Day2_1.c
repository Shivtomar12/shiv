#include<stdio.h>
    //header file includes
    //1. declaration of a functions,data types
    //2. definitions of symbolic constants, macros
    //3. typedefinition
/*
    Write a HelloWorld Application
    Test integration of compiler with IDE
*/

//int here represents return type of main function
//main here is identifier --which identifies set of instructions - block 
int main() //entry point function to application by default
{
    printf("Welcome To PreCAT-PH20 Batch"); //library function //call to a function

    return 0; //it itmitation to caller returning back after completion of job successfully
}//main is user defined function generally called by system


//gcc Day2_1.c -save-temps


void show()
{
    printf("Inside show()");
}

int add(int a,int b)
{
    return a+b;
}
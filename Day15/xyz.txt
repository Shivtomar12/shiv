#include<stdio.h>

#pragma pack(1) 

typedef struct 
{
    int total;
    char grade;
}DEMO;

int main()
{
    printf("size =%u \n",sizeof(DEMO));
}
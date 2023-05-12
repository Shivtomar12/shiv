#include<stdio.h>
/* 
int main()
{
    char ch=1;
    while(ch<=255)
    {
        printf("ch=%d ch=%c\n",ch,ch);
        ch++;
    }
} */

/* int main()
{
    int a = 3;
    
    while(a--) //while(3) a=2 //while(2) a=1 //while(1) a=0 //while(0) a=-1
    {
        printf("inside a=%d \n",a); //a=2 //a=1 //a=0
    }
    printf("outside a=%d \n",a); //a=-1
} */


int main()
{
    int a = 3;
    
    while(a--); //while(3) a=2 //while(2) a=1 //while(1) a=0 //while(0) a=-1
    {
        printf("inside a=%d \n",a); //a=-1
    }
    printf("outside a=%d \n",a); //a=-1
}


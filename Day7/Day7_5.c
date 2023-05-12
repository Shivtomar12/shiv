#include<stdio.h>

int main()
{
    int a=1;
    START:
        if(a<=5)
        {
            printf("a=%d \n",a);
            a++;
            goto START;
        }
        else
            goto EXIT;
    
   // EXIT: //label definition
     //   printf("We will stop for the day here now...");
       // printf("After this you can continue lab");
}

void test()
{
    EXIT: //label definition
        printf("We will stop for the day here now...");
        printf("After this you can continue lab");

}
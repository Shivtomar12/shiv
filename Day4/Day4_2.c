#include<stdio.h>

/* int main()
{
    float f = 56.78;
    printf("Float = %f value \n",f);
    printf("Float  = %.2f value \n",f);
    printf("Float = %10.2f value \n",f);
    printf("Float = %-10.2f value \n",f);
} */

//int printf(const char *, ...);
int main()
{
    int val ;
    val = printf("PH20");
    printf("Value of val = %d \n",val);

    val = printf("PH20\n");
    printf("Value of val = %d \n",val);

    val = printf("PH20\t\t");
    printf("Value of val = %d \n",val);

    val = printf("%8.2f",34.56);
    printf("Value of val = %d \n",val);
        
}


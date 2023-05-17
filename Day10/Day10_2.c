#include<stdio.h>

int factorial(int n)
{
    if(n==1)
        return 1;

    return n * 1;
}
int main()
{
    int num,result;
    printf("Specify number \n");
    scanf("%d",&num);

    result = factorial(num); //num here as actual argument passed by value 

    printf("Factorial of given number is %d \n",result);
}
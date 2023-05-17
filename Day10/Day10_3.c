#include<stdio.h>

int binary(int n)
{
    if(n==0)
        return 0;

    return  binary(n/2) * 10 + (n%2);
}
int main()
{
    int num,result;
    printf("Specify number \n");
    scanf("%d",&num);

    result = binary(num); //num here as actual argument passed by value 

    printf("Binary of given number is %d \n",result);
}
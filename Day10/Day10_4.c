#include<stdio.h>

void binary(int n)
{
    if(n==0)
        return ;

    binary(n/2);
    printf("%d",n%2);
}
int main()
{
    int num;
    
    printf("Specify number \n");
    scanf("%d",&num);

    binary(num); //num here as actual argument passed by value 
}
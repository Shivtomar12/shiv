#include<stdio.h>

//accept a year from user and show no. of days of given year

int main()
{
    int year;
    
    printf("Specify Year \n");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("%d is a leap year has 366 Days\n",year);
    }
    else
    {
        printf("%d is a not leap year has 365 Days\n",year);
    }
}
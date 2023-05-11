#include<stdio.h>


int main()
{
    int month;
    printf("Specify month \n");
    scanf("%d",&month);
    switch(month)
    {
        case 3:
                printf("March has 31 days\n");
                break;

        case 1:
                printf("January has 31 days\n");
                break;
        default:
                printf("Invalid Month\n");
                break;
        case 2:
                printf("February has 28/29 days\n");
                break;
    }
    printf("Ouside switch \n");
}
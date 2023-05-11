#include<stdio.h>

typedef enum {JANUARY=1,FEBRUARY,MARCH,APRIL,}MONTH ;

int main()
{
    //int month;
    MONTH month;
    printf("Specify month \n");
    scanf("%d",&month);
    switch(month)
    {
        case MARCH:
                printf("March has 31 days\n");
                break;
        case JANUARY:
                printf("January has 31 days\n");
                break;
        default:
                printf("Invalid Month\n");
                break;
        case FEBRUARY:
                printf("February has 28/29 days\n");
                break;
    }
    printf("Ouside switch \n");
}
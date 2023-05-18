#include<stdio.h>

typedef enum {EXIT,ACCEPT,DISPLAY,TOTAL,AVERAGE,MAXIMUM,MINIMUM,REVERSE}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("\n 0. Exit \n");
    printf("\n 1. Accept array elements \n");
    printf("\n 2. Display array elements \n");
    scanf("%d",&mchoice);
    return mchoice;
}
void accept_array_elements(int p[5])
{
    int index;
    printf("\n Specify Array Elements \n");
    for(index=0;index<5;index++)
    {
        scanf("%d",&p[index]);
    }
}

void display_array_elements(int p[5])
{
    int index;
    printf("\n Array Elements are \n");
    for(index=0;index<5;index++)
    {
        printf("%4d",p[index]);
    }
}
int main()
{
    int arr[5];
    MENU mchoice;

    while ((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case ACCEPT:
                        accept_array_elements(arr);
                        break;
            case DISPLAY:
                        display_array_elements(arr);
                        break;
        }
    }
}
#include<stdio.h>


int main()
{
    int month;
    printf("Specify month \n");
    scanf("%d",&month);
    switch(month)
    {
        //case '1': //will be consider as case 49 //allowed
        //case "1": //not allowed
        //case 45.67: //float value not a int constant //not allowed
        
        //case 2+5+7-1: //allowed //considered as case 13
        //case month+2+5-1:   //not allowed 
      //  case 6>=5 && 2<=6 : //allowed //will be considered as case 1 but if it causes to duplicate case then not allowed
        //        printf("Test");
          //      break;
        case 3:
                printf("March has 31 days\n");
                //break;
        case 1:
                printf("January has 31 days\n");
               // break;
        default:
                printf("Invalid Month\n");
               // break;
        case 2:
                printf("February has 28/29 days\n");
                //break;
    }
    printf("Ouside switch \n");
}
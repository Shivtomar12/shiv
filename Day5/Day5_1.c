#include<stdio.h>
//accept two numbers from user and find which is grater one

int main()
{
    int num1,num2;

    printf("Specify Number\n");
    scanf("%d",&num1);

    printf("Specify Number\n");
    scanf("%d",&num2);
   // if(num1 > num2)
     //   printf("Grater number is %d",num1);
    //else
      //  printf("Grater number is %d",num2);

    num1>num2 ? printf("Grater number is %d",num1) : printf("Grater number is %d",num2);    
        
}
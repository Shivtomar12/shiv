#include<stdio.h>
//accept three numbers from user and find which is grater one

int main()
{
    int num1,num2,num3,max;

    printf("Specify Number\n");
    scanf("%d",&num1);

    printf("Specify Number\n");
    scanf("%d",&num2);

    printf("Specify Number\n");
    scanf("%d",&num3);

 /*    if(num1>num2 && num1>num3)
        max = num1;
    else if (num2 > num3)
        max = num2;
    else
        max = num3;   
  */   
 
    if(num1>num2 && num1>num3)
        max = num1;
    else if (num2>=num1 && num2>=num3)
        max = num2;
    else    
        max = num3;
        
    printf("Maximum number is %d",max);
}
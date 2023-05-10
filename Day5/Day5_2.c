#include<stdio.h>
//accept two numbers from user and find which is grater one

int main()
{
    int num1,num2,max;

    printf("Specify Number\n");
    scanf("%d",&num1);

    printf("Specify Number\n");
    scanf("%d",&num2);
    //if(num1 > num2)
      //  max = num1;
    //else
      //  max = num2;   
    //= and ? and : has right to left associtivity
   // max = num1>num2 ? num1 : num2 ; //? and : has more precedence than = operator
    
    num1>num2 ? max=num1 : (max=num2);
    //lvalue --locator is required which is modifiable in nature
    printf("Maximum number is %d",max);
}
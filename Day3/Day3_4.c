#include<stdio.h>

/* int main()
{
    int num = 67.89;
    //int = double //implcit typecasting //higher to lowertype // downcast //data may loss
    printf("num = %d \n",num);
} */

/* int main()
{
    int num1=5,num2=9,num3;
    num3 = num1 / num2;
            //int / int 
            //int
    printf("num3 = %d \n",num3);
} */

/* 
int main()
{
    int num1=5,num2=9;
    float num3;
    num3 = num1 / num2;
            //int / int 
            //float = int
    printf("num3 = %f \n",num3);
} */



int main()
{
    int num1=5,num2=9;
    float num3;
    num3 = (float)num1 / num2; //explicit typecasting
            //float / int //after typecasting of one operand
            //now compiler will convert lower type operand to higher type implicitly
            //float = float / float 
    printf("result = %.2f \n",5/9.0 );
    printf("num3 = %f \n",num3);
    printf("num3 = %.2f \n",num3);
}



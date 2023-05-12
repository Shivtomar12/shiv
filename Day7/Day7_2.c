#include<stdio.h>

//find sum of digits for a given number e.g. 546 5 + 4 + 6=15
int main()
{
    int num,rem,sum=0;
    
    printf("Specify number \n");
    scanf("%d",&num);  //1. initial state

    //while(9326!=0) //while(932!=0) //while(93!=0) //while(9!=0) //while(0!=0)
    while(num!=0) //2. expression //on entry check
    {
        rem = num%10;       //9326%10=6     //932%10=2      //93%10=3       //9%10=9
        sum = sum + rem;    //sum=0+6=6     //sum=6+2=8     //sum=8+3=11    //sum=11+9=20
        num = num / 10; //3.Modification statement    //num=9326/10 num=932   //num932/10 num=93  //num=93/10 num=9   //num=9/10 num=0
    }
    printf("sum = %d \n",sum);
}
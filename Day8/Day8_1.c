#include<stdio.h>

/* int main()
{
    int i;
    //i=1   //1<=5
    for(i=1 ;i<=5 ; i++)    //i=2
    {
        printf("i=%d \n",i);    //i=1
    }
} */

/* for(step1 ; step2; step4 )
{
    step3
}

step1 i=1       step2 1<=5      step3 printf(1)
step4 i++ i=2   step2 2<=5      step3 printf(2)
step4 i++ i=3   step2 3<=5      step3 printf(3)
step4 i++ i=4   step2 4<=5      step3 printf(4)
step4 i++ i=5   step2 5<=5      step3 printf(5)
step4 i++ i=6   step2 6<=5     
 */


/* int main()
{
    int i,j;
    for(i=1,j=3 ; i<=5,j>=1 ;i++,j--)
    {
        printf("i=%d j=%d \n",i,j);
    }
}
 */


/* int main()
{
    int i,j;
    for(i=1 ; i<=5 ;i++);
    {
        printf("i=%d \n",i);
    }
} */
//step1 step2 step4 step2 step4 step2 step4....

/* int main()
{
    int i,j;
    i=1;
    for( ;  ;)
    {
        if(i > 5)
            break;
        printf("i=%d \n",i++);
    }
}
 */
/* step1   step2     step3
step4   step2     step3
step4   step2     step3
step4   step2     step3
step4   step2     step3
step4   step2     
 */

//assume num is entered as 3
int main()
{
    int num;                                          //3 ? 1 : 0 // 2 ? 1 :0 //1 ? 1:0 //0 ? 1 :0 //num=-1
    for(printf("Specify number\n"),scanf("%d",&num) ; num--? 1 : 0  ; printf("%d",num) )    //pf(2) //pf(1) //pf(0)
    {
        num * 10;   //meaningless //num=2 // num=1 //num=0
    }
}






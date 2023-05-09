#include<stdio.h>

/* int main()
{
    int a=2,b=3,c;
    c = a>=b || b>=a;
        //2>=3  || 3>=2
        //0  || 1
        //1
    printf("c = %d \n",c);
}
 */

int main()
{
    int a=2,b=3,c;
    c = printf("PH20")+4  || printf("Batch");
    //    4+4   || <skipped>
    //    8
    //    1     
    printf("c = %d \n",c);
}
//<exp1> || <exp2> if exp1 results true then exp2 is skipped from evaluation


//PH20//Batch

/* int main()
{
    int a=2,b=3,c;
    c = printf("PH20")-4  || printf("Batch");
    //    4-4 || 5
    //    0   || 1
    //    1
    printf("c = %d \n",c);
} 
 */
//<exp1> && <exp2> if exp1 results false then exp2 is skipped from evaluation



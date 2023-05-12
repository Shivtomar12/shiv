#include<stdio.h>

/* int main()
{
    int age=12;
    if(age<18)
        break; //not allowed
} */

/* int main()
{
    int a=1;
    while(a<=5)
    {
        printf("a = %d \n",a);
        a++;
    }
    printf("a=%d \n",a);
} */


/* int main()
{
    int a=1;
    while(a<=5)
    {
        if(a==3)
            break; 
        printf("a = %d \n",a);
        a++;
    }
    printf("a=%d \n",a);
} */


/* int main()
{
    int a=1,b=3,c;
    //while(3,1<=5) b=2 a=2  //while(2,2<=5)b=1 a=3
    while(b-- , a++ <=5 )
    {
        if(b==0)
            break;  //it foecefully move execution control outside loop
        c = a / b;
        printf("a=%d b=%d c=%d\n",a,b,c); //a=2 b=2 //a=3 b=1
    }
    printf(".....");
}
 */



/* int main()
{
    int a=1,b=3,c;
    //while(3,1<=5) b=2 a=2  //while(2,2<=5)b=1 a=3 while(1,3<=5) b=0 a=4 //while(0,4<=4) b=-1 a=5
    while(b-- , a++ <=5 )   //while(-1,5<=5) //b=-2 a=6  //while(-2,6<=5) b=-3 a=7
    {
        if(b==0)    
            continue;
        c = a / b;  // 2 / 2 //3 / 1 // skipped //5/-1 // 6 /-2 
        printf("a=%d b=%d c=%d\n",a,b,c); //a=2 b=2 //a=3 b=1
    }
    printf(".....");
}
 */


int main()
{
    int a=1,b=3,c;
    //while(3,1<=5) b=2 a=2  //while(2,2<=5)b=1 a=3 while(1,3<=5) b=0 a=4 //while(0,4<=4) b=-1 a=5
    while(b-- , a++ <=5 )   //while(-1,5<=5) //b=-2 a=6  //while(-2,6<=5) b=-3 a=7
    {
        if(b==0)    
            return 0;
        c = a / b;  // 2 / 2 //3 / 1 // skipped //5/-1 // 6 /-2 
        printf("a=%d b=%d c=%d\n",a,b,c); //a=2 b=2 //a=3 b=1
    }
    printf(".....");
}




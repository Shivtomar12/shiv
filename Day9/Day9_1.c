#include<stdio.h>

/* int main()
{   //use of auto keyword is optional
    int x ; //local variable //by default follows nature as auto //will receive memory from stack section
    printf("x = %d \n",x); //default value 
} */
/* 
int main()
{
    auto int x ;
    printf("x = %d \n",x);  
}

void test_1()
{
    printf("x = %d \n",x); //scope of x is limited to main function
} */

/* void test_1(int x);

int main()
{
    int x = 5;
    test_1(x);
    printf("inside main x = %d \n ",x);
}

void test_1(int x)
{
    x++;
    printf("inside test x = %d \n ",x);
} */

/* 
int main()
{
    int x=1;
    for( ; x<=5; x++)
    {
        int x = 1;
        printf("x=%d \n",x);
    }//inner block
}//outerblock */


/* int main()
{
    int o_1=2,o_2=3,i_1=4;
    {
        int o_1=11,i_1=22,i_2=33;
        printf("%d %d %d %d\n",i_1,i_2,o_1,o_2);
    }//inner block can access members of outer block
    printf("%d %d %d\n",i_1,i_2,o_1);
}//outer block can not access members of inner block

 */


int main()
{
    int x=5;
    calculate(x);
    printf("x=%d \n",x);

    calculate(x);
    printf("x=%d \n",x);

    calculate(x);
    printf("x=%d \n",x);

}
void calculate(int x)
{
    x++;
}
#include<stdio.h>

/* int main()
{
    int a ;     
    a = 1,2,3; //= operator has more precedence than comma operator
            //= operator follows R TO L associativity
    printf("a = %d \n",a);
} */

/* int main()
{
    int a ;     
    a = (1,2,3); //here comma is with precedence //hence right most expression result i.e. 3 will be associated at sequence point 
    printf("a = %d \n",a);
} */

/* int main()
{
    int a;
    a = printf("1"),printf("10"),printf("100");
    //a=1,2,3;
    printf("a = %d \n",a);
    a = (printf("1"),printf("10"),printf("100"));
    //a = (1,2,3);
    printf("a = %d \n",a);
}
 */

/* int main()
{
    int a=4,z;
    z = (a++,++a,a++,a=2);
        //a=5 //a=6 //a=7
        //z = (4,6,6,2)
    printf("z=%d a=%d\n",z,a);
}
 */

/* int main()
{
    return 1,2,3; //will return 3
} */


/* int main()
{
    int a=2;
    if(a--,--a) //a=1 //a=0
    //if(2,0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
} */

/* int main()
{
    int a;
    a = (20+30,5+2,6*6);
        //a = (50,7,36)
    printf("a=%d \n",a);
}
 */

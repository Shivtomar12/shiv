#include<stdio.h>

/* int main()
{
    int a = 5;
    ++a; // a = a + 1   //pre increment //a=6
    printf("a = %d \n",a);
    
    a=5;
    a++; // a = a + 1  //postincrement //a=6
    printf("a = %d \n",a);

    a=5;
    --a; //a = a - 1 //predecrement //a = 4
    printf("a = %d \n",a);

    a=5;
    a--; //a = a - 1 //postdecrement //a = 4
    printf("a = %d \n",a);
} */

/* int main()
{
    int a = 5,c;
    c = ++a ;   //a=a+1 //a=6
                //c = 6;
    printf("a=%d c=%d \n",a,c);
}
//if preoperation is performed on operand
//1. solve preoperation ++ / -- on the operand on which ++/-- is applied
//2. associate current state of operand on which ++/-- is applied at sequence point

 */


/* int main()
{
    int a = 5,c;
    c = a++ ;   //a=a+1 
    //c = 5 //a=6          
    printf("a=%d c=%d \n",a,c);
} */
//if postoperation is performed on operand
//1. associate current state of operand at sequence point on which ++/-- is applied at sequence point
//2. solve preoperation ++ / -- on the operand on which ++/-- is applied


/* int main()
{
    int a=1;    //a=0
    if(--a) //if(0)
        printf("True");
    else
        printf("False");
}
 */

/* int main()
{
    int a=1;    
    if(a--)  //if(1) //a=0
        printf("True a=%d\n",a);
    else
        printf("False a=%d\n",a);
}
 */

#include <stdio.h>
int main()
{
    int a = -10, b = 3, c = 0, d;
    
    d = a++ || (++b && c++); //a=-9
        //-10 ||
        //  1 || <skipped>
    printf("%d, %d, %d, %d, ", a, b, c, d);
    
    a = -10, b = 3, c = 0;
    d = (c++ && ++b) || a++; //c=1 //b=3
   // d = (0 && skip )
   // d = 0   || a++      //a=-9
   // d = 0 || -10
   // d = 0 || 1
   // d = 1
    printf("%d, %d, %d, %d", a, b, c, d);
    return 0;
}



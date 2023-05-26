#include<stdio.h>
#include"fun.h"
#include"stdlib.h"


/* int main()
{
    struct date d1;
    printf("Hi...");
} */


/* #define PI 3.14

int main()
{
    int r=4;
    float area = r * r * PI;
    printf("PI =%.2f",PI);

} */

/* #define SQR(x)  x*x

int main()
{
    int a=2,b=3,c;

    c = SQR(a);  //x * x //a*a    
    printf("c=%d \n",c);
} */

/* #define SQR(x)  x*x
int main()
{
    int a=2,b=3,c;
    c = SQR(a+b);  //x * x //a+b*a+b    
    printf("c=%d \n",c);
}
 */

/* #define SQR(x)  (x)*(x)
int main()
{
    int a=2,b=3,c;
    c = SQR(a+b);  //x * x //(a+b)*(a+b)    
    printf("c=%d \n",c);
} */

/* #define STRINGIZE(x) char *s = #x; printf("length=%u \n",strlen(#x));

int main()
{
    STRINGIZE(SUNBEAM) // char *s= "SUNBEAM";
                       // printf("length=%u \n",strlen("SUNBEAM"));
}
 */

/* #define CONCATE(x,y) x##y
int main()
{
    CONCATE(re,turn) 0; //  return 0;
} */


/* int main()
{
    int age ;
    scanf("%d",&age);

    if(age > 18)
        printf("Eligible");
    else
        printf("Eligible");
}
 */

#define PI 3.14
#define SIZE 2
int main()
{
    #ifdef SIZE
        printf("PI = %.2f",PI);
        int a;
        a=10;
        a++;
        #undef PI
    #else
        int b=22;
        b++;
        printf("b=%d \n",b);

    #endif


}

















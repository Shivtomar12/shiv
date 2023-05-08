#include<stdio.h>
#include<limits.h>

//sizeof is a operator //it is processed at compiletime
//sizeof operator scales memory represented by given unit

/* int main()
{
    char ch1;
    printf("size=%u \n",sizeof(char));
} */

/* 
int main()
{
    signed char ch1; //it is instruction to use msb bit to represent sign - 0 for +ve 1 for -ve
    unsigned char ch2; //it is instruction not to represent sign in msb bit
} */


//SCHAR_MIN ,SCHAR_MAX are symbolic constants represents signed char min value,signed char max value
/* int main()
{
    printf("char \t %u \t %%c \t %d to %d \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
} */

/* int main()
{
    char ch1 = 'A';// 'A' ----> 65 --->1000001
    printf("%d %c %o %x \n",ch1,ch1,ch1,ch1);
}
 */


/* int main()
{
    signed char ch1 = 65;
    signed char ch2 = 127;
    signed char ch3 = 131;
    printf("ch1=%d ch2=%d ch3=%d \n",ch1,ch2,ch3);
} */
//01111101
//  10000010
//+        1
// ----------
//   10000011
//   10000011

//if there is negative number then it processed
// e.g -5
//what is binary of 5 00000101
//00000101
//find 1's compiment 
//11111010
//find 2's compliment
// 1 1 1 1 1 0 1 0
//+              1
//  ----------------

/* int main()
{
    signed char ch1 = 'A';
    signed char ch2 = 'B';
    signed char ch3;

    ch3 = ch1 + ch2 ;
    printf("%d + %d = %d \n",ch1,ch2,ch3);
}

 */

/* int main()
{
    signed char ch1 = 'A'; //-128 to 127
    signed char ch2 = 'B';
    unsigned char ch3; // 0 to 255

    ch3 = ch1 + ch2 ;
    printf("%d + %d = %u \n",ch1,ch2,ch3);
}
 */

int main()
{
    short int x; //int value is not grater than 32767
    long int y;
    int z;
    printf("size=%u size=%u size=%u\n",sizeof(x),sizeof(y),sizeof(z));
}


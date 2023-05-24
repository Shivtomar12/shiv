#include<stdio.h>

#pragma pack(1)
typedef struct 
{
    unsigned dd : 5;
    unsigned    : 3;    //anonymous bit field
    unsigned mm : 4;
    unsigned yy : 11;   
}DATE;

int main()
{
    printf("size = %u \n",sizeof(DATE));
    DATE d1;
    d1.dd = 32;             //001  00000
    printf("Day = %d \n",d1.dd);

    d1.dd = 77;        //010    01101
    printf("Day = %d \n",d1.dd);

    d1.dd = 31; d1.mm=12; d1.yy=2023;   //11111100111
    printf("%d-%d-%d \n",d1.dd,d1.mm,d1.yy);

    int *p;
    p = &d1.dd;
}


















/* int day;
do
{
    printf("Specify number \n");
    scanf("%d",&num);
} while(num<=0 || num>31);
 */


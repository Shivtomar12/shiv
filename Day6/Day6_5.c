#include<stdio.h>

typedef enum colors {RED,BLUE=12,GREEN}COLOR; 
typedef enum {SUN,MON,TUE} DAYS; //anonymous enum //DAYS here is another name /alias to enum 
enum {JAN,FEB,MAR} m1; //m1 here is a global variable

int num;
int main()
{
    COLOR c1; //c1 here is created using alias/nickname
    enum colors c2; //c2 here is created using real name    

    printf("red = %d \n",RED);//red=0
    printf("green =%d \n",GREEN);//green=13
    DAYS d1;
    d1 = MON;
    printf("value of d1 = %d size=%u &d1=%u\n",d1,sizeof(d1),&d1);
}
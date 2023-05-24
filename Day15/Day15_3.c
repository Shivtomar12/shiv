#include<stdio.h>

/*#pragma pack (1)
 typedef struct  
{
    int total;
    char grade;
}RESULT;        //RESULT scale factor is 5 bytes
 */

/* typedef union  
{
    int total;  //4 bytes
    char grade; //1 byte
}RESULT;        //RESULT scale factor is 4 bytes

int main()
{
    printf("size = %u \n ",sizeof(RESULT));
    RESULT u1;
    u1.total = 789; //00000000  00000000 00000011  00010101
    printf("%d %d\n",u1.total,u1.grade);

    u1.grade = 'A'; // 01000001
    //00000000  00000000 00000011  01000001
    printf("%d %d\n",u1.total,u1.grade);
} */


typedef union 
{
    short int num;
    char ch[2];
}DEMO;

int main()
{
    DEMO d1;                
    d1.ch[0] = 1;           //00000001
    d1.ch[1] = 2;           //00000010                  ch[1]        ch[0]
    printf("number = %d\n",d1.num);  //               00000010 00000001
}



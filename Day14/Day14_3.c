#include<stdio.h>

typedef struct student
{
    int rollno;
    char sname[20];
    int marks;
}STUDENT; //STUDENT here is alias given to struct student skeleton

struct  //writting tagname is optional
{
    int dd;
    int mm;
    int yy;
}d1; //d1 here is global variable will receive 12 bytes memory from DS

typedef struct 
{
    char grade;
    float per;
}RESULT; //RESULT is a alias to anonymous structure


int main()
{
    struct student s1; //variable is created using real name
    STUDENT s2; //variable here is created using alias
    RESULT r1;    
}
#include<stdio.h>

typedef struct
{
    int rollno;
    struct 
    {
        char fname[20];
        char mname[20];
        char lname[20];
    }fullname;
    
    int marks;
}STUDENT;

int main()
{
    STUDENT s1;
    printf("size = %u \n",sizeof(STUDENT));
    strcpy(s1.fullname.fname,"aaa");
    strcpy(s1.fullname.mname,"bbb");
    strcpy(s1.fullname.lname,"ccc");

    printf("Student Fullname = %s %s %s \n",s1.fullname.fname,s1.fullname.mname,s1.fullname.lname);
}
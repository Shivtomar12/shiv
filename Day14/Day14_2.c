#include<stdio.h>

struct student
{
    int rollno;//=111; //it is pure declaration
    char sname[20];
    int marks;
};//blueprint //skeleton //ADT

int main()
{
    struct student s1={101,"aaa",77};
    struct student s2,s3={102,"bbb"};
    struct student s4;

    printf("%u %u %u \n",&s1.rollno,s1.sname,&s1.marks);
    display_student_data(s1); //here s1 is passed by value //28 bytes are passed

    s2 = s1;

    display_student_data(s2);
    display_student_data(s3);

    s4.rollno = s3.rollno;  //int = int
    strcpy(s4.sname,s3.sname);
    display_student_data(s4);
     
}


void display_student_data(struct student s) //here s will be newly created with 28 bytes
{
    printf("%d %s %d \n",s.rollno,s.sname,s.marks);
}
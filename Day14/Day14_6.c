#include<stdio.h>

typedef struct 
{
    int rollno;
    char sname[20];
    int marks;
}STUDENT;

void display_student_data(STUDENT *p)
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("%d %s %d \n",p[i].rollno,p[i].sname,p[i].marks);
    }

    for(i=0;i<2;i++)
    {
        printf("%d %s %d \n",(p+i)->rollno,(p+i)->sname,(p+i)->marks);
    }

    for(i=0;i<2;i++)
    {
        printf("%d %s %d \n",p->rollno,p->sname,p->marks);
        p++; //p is pointing struct memory address 
            //address of student + 1
    }

}
int main()
{
    STUDENT sarr[2] = {{101,"aaa",56},{102,"bbb",88}};
    printf("size = %u \n",sizeof(sarr));
    display_student_data(sarr);
}
#include<stdio.h>

typedef struct
{
    int rollno;
    char sname[20];
    int marks;
}STUDENT;

typedef enum {EXIT,ADDSTUDENT,DISPLAYSTUDENT}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("0. Exit \n");
    printf("1. Add Student Data \n");
    printf("2. Display Student Data \n");
    scanf("%d",&mchoice);
    return mchoice;
}

void display_student_data(const STUDENT *p)
{
    printf("%d %s %d \n",p->rollno,p->sname,p->marks);
    printf("%d %s %d \n",(*p).rollno,(*p).sname,(*p).marks);
    //printf("%d %s %d \n",&*&p->rollno,p->sname,&p->marks);
}

void accept_student_data(STUDENT *p)
{
    printf("Specify Student Rollno: \n");
    scanf("%d",&p->rollno);

    printf("Specify Student Name: \n");
    scanf("%s",p->sname);

    printf("Specify Student Marks: \n");
    scanf("%d",&p->marks);

}
void write_student_data_to_file(const STUDENT *p)
{
    FILE *fileptr;
    fileptr = fopen("student.txt","a");
    if(fileptr!=NULL)
    {
        fprintf(fileptr,"%d %s %d \n",p->rollno,p->sname,p->marks);
        fclose(fileptr);
    }
}

void read_all_records_from_file()
{
    STUDENT s;
    FILE *fileptr;
    fileptr = fopen("student.txt","r");
    if(fileptr!=NULL)
    {
        while( fscanf(fileptr,"%d %s %d",&s.rollno,s.sname,&s.marks)    !=EOF)
        {
            display_student_data(&s);
        }
        fclose(fileptr);
    }
}
int main()
{
    STUDENT s1;
    MENU mchoice;
    while((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case ADDSTUDENT:
                            accept_student_data(&s1);
                            write_student_data_to_file(&s1);
                            break;
            case DISPLAYSTUDENT:
                            //display_student_data(&s1);
                            read_all_records_from_file();
                            break;
        }
    }   
}
#include<stdio.h>

typedef enum {MARKETING=10,MANAGEMENT=20,SALES=30,DESIGNING=40} DEPARTMENT;

typedef enum {MANAGER='M',SUPERVISOR='S',SECURITY='s',CLERK='C'} DESIGNATION;

int main()
{
    int empid;
    DEPARTMENT deptno;
    char desig;
    printf("Specify Employee ID \n");
    scanf("%d",&empid);

    printf("Specify Employee Department No. \n");
    scanf("%d",&deptno);

    printf("Specify Employee Designation \n");
    scanf("%*c %c",&desig);

    printf("Employee with employee ID %d is working in ",empid);
    switch(deptno)
    {
        case MARKETING:
                        printf("Marketing Department ");
                        break;
        case MANAGEMENT:
                        printf("Management Department ");
                        break;
        case SALES:
                        printf("Sales Department ");
                        break;
        case DESIGNING:
                        printf("Designing Department ");
                        break;   
    }
    switch(desig)
    {
        case MANAGER:
                printf("Working As Manager\n");
                break;   
        case SUPERVISOR:
                printf("Working As Supervisor\n");
                break;
        case SECURITY:
                printf("Working As Security Officer\n");
                break;
        case CLERK:
                printf("Working As Clerk\n");
                break;
    }
}

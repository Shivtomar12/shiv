#include<stdio.h>

/* int main()
{
    int num=23;
    printf("num=%d &num=%u \n",num,&num);
} */

/* int main()
{
    int num = 23 ; //num is designed to store int type value
    int *ptr; //ptr designed to store address of int // ptr is pointer to int //
    //ptr here called as wild pointer
} */

 /* int main()
{
    int num = 23 ; //num is designed to store int type value
    int *ptr=NULL; //ptr is NULL pointer // is a pointer which points to nothing 
}
 */


/* int main()
{
    int num = 23 ; //num is designed to store int type value
    int *ptr=&num; //here ptr = num when it is assigned at time of declaration ignore *  

    printf("num=%d &num=%u ptr=%u &ptr=%u \n",num,&num,ptr,&ptr);
}
 */


/* int main()
{
    int num = 23 ; 
    int *ptr=NULL;
    ptr = &num; 
    printf("num=%d &num=%u ptr=%u &ptr=%u \n",num,&num,ptr,&ptr);
    //* can be applied as unary operator only on address operand
    printf("num=%d *ptr=%d",num,*ptr); //value at operator / derereferencing operator / indirection operator
    //*ptr //*100
    *ptr = *ptr + 10;
            //*100
            //*ptr = 23 + 10
    printf("num=%d *ptr=%d",num,*ptr);
} */


/* int main()
{
    char ch = 'A';
    int num = 456;
    float f=45.67;
    char *cptr =&ch; //cptr is designed to store address of char location
    int *ptr = &num; //ptr is designed to store address of int location
    float *fptr=&f; //fptr is designed to store address of float location
    printf("size=%u size=%u size=%u\n",sizeof(cptr),sizeof(ptr),sizeof(fptr));
} */

/* int main()
{
    int num = 23;
    int * ptr = &num;
    int **pptr = &ptr; //pptr is pointer to pointer to int 
    printf("pptr=%u \n",pptr); //pptr=104 //address of pointer to int
    printf("*pptr=%u \n",*pptr); //*pptr=100 //  address of int 
    printf("**pptr=%d \n",**pptr); //**pptr=23 //  int 
    printf("&pptr=%u &ptr=%u &num=%u \n",&pptr,&ptr,&num); //*pptr=100 //  address of int 
} */

int main()
{
    int num1=20,num2=30;
    int *ptr=&num1;
    printf("*ptr=%d ptr=%u \n",*ptr,ptr);
    ptr = &num2;
    printf("*ptr=%d ptr=%u \n",*ptr,ptr);
}//pointer is a variable






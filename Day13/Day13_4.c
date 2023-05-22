#include<stdio.h>

/* int main()
{
    int num=789;
    char ch ='A';
    int *p; //p is designed to store address of any int location
    
    char *c ; //c is designed to store address of character location
    
    p=&num;
    printf("*p = %d \n",*p); //from base address it will derefer 4 bytes as it is a pointer to int
    
    c=&ch;
    printf("*c = %d \n",*c); //from base address it will derefer 1 byte as it is a pointer to char
} */


/* int main()
{
    int num=789;
    char *c ; //c is designed to store address of character location

    c = &num;
    printf("num=%d &num=%u c=%u *c=%d \n",num,&num,c,*c);
    
    printf("num=%d &num=%u c=%u *c=%d \n",num,&num,c,*(int *)c);
}
 */

int main()
{
    int num=789;
    char ch ='A';
    void *p; //is a genric pointer //designed to store address of any type location
    //void pointer is unaware of whose address it has stored with
    p=&num;
    printf("*p=%d p=%u\n",*(int *)p,p); //from base address it will derefer 4 bytes as it is a pointer to int
    
    p=&ch;
    printf("*p=%d p=%u\n",*(char *)p,p);//from base address it will derefer 1 byte as it is a pointer to char

}




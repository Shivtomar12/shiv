#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int *p= NULL; //here p will receive 4 bytes memory from stack section
    //1. request memory dynamically
    p = (int *) malloc(sizeof(int)); //malloc will provide 4 bytes memory from heap section
    //but it may be situation there are no free bytes are available on heap section
    //on failure malloc returns NULL
    //2. if failure
    if(p==NULL)
    {
        printf("Not enough memory \n");
        return 0;
    }//if no memory received

    //3. if sucess use memory
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);   //default value at the location memory which is given by malloc will be garbage

    *p = 22;
    printf("p=%u &p=%u *p=%d\n",p,&p,*p);

    //4. deallocate memory
    free(p);    //void free(void *); 
    //after releasing memory pointed by p ...this p will be dangling pointer
    p = NULL;
}
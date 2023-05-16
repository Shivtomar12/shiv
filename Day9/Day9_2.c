#include<stdio.h>

/* register int p; //not allowed here

int main()
{
    register int x ; //compulsory to use keyword register inside block 
} */


/* int main()
{
    register int x; //it is a request to identify cpu register
            //it is a intimation that x identified register
            //will be used to store int value
} *///if sucessful data will be processed with high speed
//if unsucessfull request will be converted to auto type //process will be speed down

int main()
{
    register int x; 
   // scanf("%d",&x); //can not apply address operator on register
    printf("size=%u\n",sizeof(x));
}







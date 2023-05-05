#include<stdio.h>

int main()
{
    printf("Good Morning !!!");
    //use of return is not compulsory
}

int main(void)
{
    printf("Good Morning !!!");
    return 0;
}

//void at return type indicates function do not return any type value
//void as input indicates no input to a function

void main(void)
{
    printf("Good Morning !!!");
    return ;    //can not return value //instruction to go back calling function forcefully
}

void main()
{
    printf("Good Morning !!!");
}

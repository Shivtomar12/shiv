#include<stdio.h>
int mystrcmp(const char *p1,const char *p2)
{
    while(*p1!=NULL && *p2!=NULL)
    {
        if(*p1 != *p2) 
            break;

        p1++;   //if same chars traverse both string
        p2++;
    }
    return *p1 - *p2; //returns ascii value difference of 2 chars
}//return value can be >0 or <=  or == 0 

int main()
{
    char s1[20];
    char s2[20];
    int diff;
    printf("Specify String \n");
    gets(s1);

    printf("Specify String \n");
    gets(s2);

    if(diff==0 )
        printf("%s is equals to %s \n",s1,s2);
    else if(diff > 0)
        printf("%s is grater than %s \n",s1,s2);
    else
        printf("%s is equals less than %s \n",s1,s2);
}
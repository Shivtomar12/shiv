#include<stdio.h>
#include<string.h>

//size_t is alias of unsigned int

size_t mystrlen(const char *p)
{
    char *k = p;
    while(*p !=NULL)
    {
        p++;
    }
    return p - k;
}//count of chars in given string
int main()
{
    char s1[20];
    char s2[20];
    size_t len;
    printf("Specify String \n");
    gets(s1);
    len = strlen(s1);
    printf("Length of string = %u \n",len);

    len = mystrlen(s1);
    printf("Length of string = %u \n",len);

}
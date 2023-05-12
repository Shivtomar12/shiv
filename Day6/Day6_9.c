#include<stdio.h>

int main()
{
    int num;
    char ch;

    printf("Specify number \n");
    scanf("%d",&num);

    printf("Specify character \n");
    scanf("%*c"); //supress a characater from storage
    ch = getchar();
    

    printf("num=%d ch=%c \n",num,ch);
    return 0;

}
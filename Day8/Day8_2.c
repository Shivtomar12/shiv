#include<stdio.h>

typedef enum {EXIT,SUMOFDIGITS,REVERSE,PALINDROM,ARMSTRONG} MENU; 

int main()
{
    int onum,num;
    MENU mchoice;
    do
    {
        printf("0. Exit \n");
        printf("1. Find sum of digits \n");
        printf("2. To find reverse number\n");
        printf("3. Conclude Palindrom Y/N ?\n");
        printf("4. Conclude Palindrom Y/N ?\n");
        scanf("%d",&mchoice);
        if(mchoice!=0)
        {
            printf("Specify number \n");
            scanf("%d",&onum);
        }
        switch(mchoice)
        {
            case SUMOFDIGITS:
                            num = onum;
                            while(num!=0)
                            {
                                
                            }
                            break;
            case REVERSE:
                            break;
            case PALINDROM:
                            break;
            case ARMSTRONG:
                            break;
        }
    }while(mchoice!=0);

}
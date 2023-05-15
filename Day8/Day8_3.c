#include<stdio.h>
/* 
        A A
      B A A B
    C B A A B C
  D C B A A B C D
E D C B A A B C D E
 */

int main()
{
    int r,c,space=10;
    for(r=1; r<=5 ; r++)
    {
        for(c=1;c<=space;c++)
        {
            printf(" ");
        }
        space=space-2;
        for(c=r;c>=1;c--)
        {
            printf("%2c",64+c);     
        }

        for(c=1;c<=r;c++)
        {
            printf("%2c",64+c);     
        }
        printf("\n");       
    }
}




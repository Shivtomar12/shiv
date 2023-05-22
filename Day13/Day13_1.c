#include<stdio.h>

/* int main()
{
    int arr[2][3]; //2 here repesents no.of rows and 3 here repsents no.cols
} */

//it is compulsory to provide last dimention
/* int main()
{
    int arr[2][]={11,22,33,44,55,66};
} */

/* int main()
{
    int arr[][3]={11,22,33,44,55,66};
}//we can skip first dimention at the time of declaration
 */


/* int main()
{
    int arr[2][3]={11,22,33,44,55,66};
    printf("size = %u \n",sizeof(arr));
}
 */

/* int main()
{
    int r,c;
    int arr[2][3]={{11,22,33},{44,55,66}};
    printf("size = %u \n",sizeof(arr));
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d %u\t",arr[r][c],&arr[r][c]);   
        }
        printf("\n");
    }
} */

/* int main()
{
    int r,c;
    int arr[2][3]={{11,22},{44,55,66}};
    printf("size = %u \n",sizeof(arr));
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d %u\t",arr[r][c],&arr[r][c]);   
        }
        printf("\n");
    }
} */

/* int main()
{
    int r,c;
    int arr[2][3]={11,22,44,55,66};
    printf("size = %u \n",sizeof(arr));
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d %u\t",arr[r][c],&arr[r][c]);   
        }
        printf("\n");
    }
} */

void display_array_elements(int p[2][3]) ;

int main()
{
    int r,c;
    int arr[2][3]={11,22,44,55,66};
    printf("size = %u \n",sizeof(arr));
    display_array_elements(arr);
}

void display_array_elements(int p[2][3]) //int **p
{
   int r,c;
   printf("size = %u p=%u &p=%u\n",sizeof(p),p,&p);
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d %u\t",p[r][c],&p[r][c]);   
        }
        printf("\n");
    }
}

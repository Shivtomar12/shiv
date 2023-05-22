#include<stdio.h>

int main()
{
    int arr[2][3]={{11,22,33},{44,55,66}};
    printf("size=%u \n",sizeof(arr));
    printf("arr=%u \n",arr); //100 // is address of row // address of pointer to int
    printf("arr+1=%u \n",arr+1); //100+1 //address of row //address of pointer to int
    printf("*(arr+1)=%u \n",*(arr+1));//100+1==112 ==>*112 ===>112//address of int/col
    printf("*(arr+1)+2=%u \n",*(arr+1)+2);//100+1==112 ==>*112 ===>112+2===>120//address of int/col
    printf("*(*(arr+1)+2)=%u \n",*(*(arr+1)+2));//100+1==112 ==>*112 ===>112+2===>120==>*120==>66 //int value
    printf("&arr+1 = %u\n",&arr+1);
    printf("arr[1][2]=%d \n",arr[1][2]);//66
}

//arr[1] [2]    //array notation
//*(arr+1)[2]
//*(*(arr+1)+2) //pointer notation















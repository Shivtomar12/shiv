#include<stdio.h>

int main()
{
    int arr[5] = {11,22,33,44,55};
    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);
    
    printf("arr+1=%u \n",arr+1); //100 + 1 =104 //address of int
    printf("*(arr+1)=%u \n",*(arr+1)); //100 + 1 //(*104) //22

    printf("&arr+1=%u \n",&arr+1); //address of array + 1 //100+1 = 120

    printf("3+arr= %u  *(3+arr)=%d \n" ,3+arr,*(3+arr));
    printf("arr[3]=%d 3[arr]=%d \n",arr[3],3[arr]);
    pass_array_to_function(arr);

    arr++;  //arr=arr+1 // not allowed //arrays base address is locked by compiler
}

void pass_array_to_function(int *p) //(int p[5]) 
{
    int i, *k=p;
    printf("size=%u p=%u &p=%u \n",sizeof(p),p,&p);
    printf("p+1=%u \n",p+1); //100 + 1 =104 //address of int
    printf("*(p+1)=%u \n",*(p+1)); //100 + 1 //(*104) //22

    i=0;
/*     while(i<5)
    {
        printf("%4d %4d \n",p[i],*(p+i));
        i++;
    }
 */
    while(i<5)
    {
        printf("%4d %4d \n",p,*p); //100 *100=11 //
        i++;
        p++; //p=p+1//p=100+1 = 104
    }
    printf("After loop p=%u\n",p); //p=120

    printf("p[-1]=%d\n ",p[-1]);    //*(120-1) *(116)=55

    int diff;
    //it will give us difference of no. of eles between
    diff = p - k ;  //address of int - address of int //120 - 100 // 20 /4 =5 
    //p+ k; ////address of int + address of int
}
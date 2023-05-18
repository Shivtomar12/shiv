#include<stdio.h>

/* int main()
{
    int arr[5]; //collection of int eles which is commonly identified with name arr
} */

/* int main()
{
    int arr[5] = {11,22,33,44,55};
    int index;
    for(index=0;index<5;index++)
        printf("%d %u\n",arr[index],&arr[index]);
} //memory is received in sequence
 */


/* int main()
{
    int arr[5];
    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);
} */

/* int main()
{
    int arr[];    
    int arr[][];
}//it is necessary to provide last dimention
 */

/* int main()
{
    int arr[]={11,22,33,44,55};    
    int arr[][]={11,22,33,44,55,66};
} *///it is necessary to provide last dimention //but can skipped only in case of 1D Array 
//providing list members are initialsied at the time declaration

/* int main()
{
    int arr[5] = {11,22,33};
    int index;

    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);

    for(index=0;index<5;index++)
        printf("%d %u\n",arr[index],&arr[index]);
}//array is initialised but partially that too at the time of declaration
 */

/* int main()
{
    int arr[5];
    int index;

    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);

    arr[0]=11;
    arr[1]=22;
    arr[2]=33;

    for(index=0;index<5;index++)
        printf("%d %u\n",arr[index],&arr[index]);
}//array is initialised but partially but not at the time of declaration
 */


/* int main()
{
    int arr[] = {11,22,33};
    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);
}
 */

int main()
{
    int arr[] = {11,22,33};
    int index;

    printf("size=%u arr=%u &arr=%u \n",sizeof(arr),arr,&arr);

    for(index=0;index<5;index++)
        printf("%d %u\n",arr[index],&arr[index]);

    printf("test here \n");    
}//handling array bounds is job of programmer

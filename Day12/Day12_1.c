#include<stdio.h>

/* int main(void)
{
    int num = 20; //int value in num is variable in nature //it modifiable via num //via num int is variable
    printf("num = %d \n",num); //num=20
    num = 90;
    printf("num = %d \n",num); //num=90
} */

/* int main()
{
    const int centerid; //int value via centerid is constant
    centerid = 442;
}
 */

/* int main()
{
    const int centerid=442; //it is mandatory to initialise at the time of declaration
    centerid ++; //int value via centerid is constant can not be modified
}
 */

/* int main()
{
    const int centerid=442; //it is mandatory to initialise at the time of declaration
    int *p = &centerid;  
    centerid++; //via centerid int value is constant
    *p = 200; //but via p value inside centerid is not constant //can be modified
} */

int main()
{
    const int centerid=442; //it is mandatory to initialise at the time of declaration
    const int * const p = &centerid; //value at p is constant  
    centerid++; //via centerid int value is constant
    *p = 200; //value at p is constant
    int num =5;
    p = &num;    // p is also constant
    *p = 66;
}
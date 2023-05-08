#include<stdio.h>

/* int main()
{   
   //num1 here is identifier to a memory block of 4 bytes
  //request memory to store data of type int
  //num1 her is locally declarared //hence it will receive memory from stack section
   int num1; //declaration //definition //initialisation
   printf("num1 = %d",num1);  
   return 0; 
}
 */

/* int main()
{   
   int num1=45; //declaration //definition //initialisation is done at the time of declaration
   printf("num1 = %d",num1);  
   return 0; 
}
 */

 int main()
{   
   int num1=45,num2=89; 
   printf("num1=%d &num1=%u\n",num1,&num1);  
   printf("num2=%d &num2=%u",num2,&num2);  

   num1 = 67; //num1 is a variable //contents can be modified
   printf("num1=%d &num1=%u\n",num1,&num1);  
   return 0; 
}

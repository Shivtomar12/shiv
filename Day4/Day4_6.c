#include<stdio.h>

/* int main()
{
    int c;
    printf("!0 = %d \n",!0);
    printf("!1 = %d \n",!1);
} */

/* int main()
{
    printf("!!0 = %d \n",!!0);
    printf("!!1 = %d \n",!!1);
} */


int main()
{
    int c;
    c = !15 + !0 - !!!-3;
      //  !1  + 1 - !!!1  
      //  0  +  1 - !!0
      //  0  +  1 - !1
      //  0  +  1 - 0
      //  1
    printf("c = %d \n",c);
}
#include<stdio.h>

/* int main()
{
    char carr[6] = {'F','R','I','D','A','Y'}; //array of characters
    printf("size = %u \n ",sizeof(carr));
    int i=0;
    while(i<6)
    {
        printf("%c",carr[i]);
        i++;
    }
} */


/* int main()
{       //a null value can be represented '\' OR NULL OR 0
//carr here is string now 
    char carr[7] = {'F','R','I','D','A','Y','\0'}; //array of characters but always with sentinel element as NULL
    //char carr[7] = {'F','R','I','D','A','Y',NULL}; //array of characters
    //char carr[7] = {'F','R','I','D','A','Y',0}; //array of characters
    printf("size = %u \n ",sizeof(carr));
    //int i=0;
    //while(carr[i] != NULL )
    //{
      //  printf("%c",carr[i]);
       // i++;
    //}
    printf("string = %s\n",carr);
} */

/* int main()
{
    char carr[20] = "Friday" ;
    printf("size= %u \n",sizeof(carr));
}
 */

/* int main()
{
    char carr[20] = "Fri\0day" ;           // F   r    i    \0   d   a   y  \0  .......
    printf("size= %u \n",sizeof(carr));    //100  101  102  103 104 105 106  107
    printf("carr=%s \n",carr);
}
 */

/* int main()
{
    char carr[] = "Friday" ;    //7th byte will be used by compiler to store null char //
    printf("size= %u \n",sizeof(carr));
} */


/* int main()
{
    char carr[] = "Fri\0day" ;
    printf("size= %u \n",sizeof(carr));
}
 */

int main()
{
    char *p = "Friday";
    printf("size= %u \n",sizeof(p));
    printf("p=%u &p=%u p=%s\n",p,&p,p);
    //*p = 'f'; //this statement will cause to runtime error //trying to modify readonly memory
    printf("Check if this works");

    char s1[] = "Friday"; //s1 here will receive 7 bytes memory f rom stack section
    *s1 = 'f'; //hence modifiable
    printf("Check if this works");
}

/* 
int num = 20;
float f = 56.78;
char ch = 'A';
 */



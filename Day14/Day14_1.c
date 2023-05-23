#include<stdio.h>

//first argument should be execuable filename
//further arguments to be separated by space
//e.g. .\a.exe JAN FEB MAR APRIL

/* //argc here will collect count of arguments given as input to main

int main(int argc) 
{
    printf("Command Line Arguments count = %d\n",argc);
} */


//argc here will collect count of arguments given as input to main
//argv 

/* int main(int argc,char *argv[]) //char **argv 
{
    int i;
    printf("Command Line Arguments count = %d\n",argc);

    for(i=0; i<argc; i++)
    {
        printf("%s \n",argv[i]);
    }
} 
 */

//env here will catch all system enviornment variables in string format
/* int main(int argc,char *argv[],char *env[]) 
{
    int i;
    printf("Environment Variables\n");

    for(i=0; i<32; i++)
    {
        printf("%s \n",env[i]);
    }
} 
 */


int main(int argc,char *argv[])
{
    int sum=0;
    if(argv[2][0]=='+')
    {
        sum = atoi(argv[1]) + atoi(argv[3]) ;
    }
    printf("Sum is = %d \n",sum);
}
//atoi === alpha to int ==>string to int
//argv[0]  ========= . /  a . e x e \0
//argv[1]  ========= 1 0 \0
//argv[2]  ========= + \0
//argv[3]  ========= 2 0 \0


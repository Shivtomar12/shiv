#include<stdio.h>

/* int main()
{
    char s1[20];
    printf("Specify String \n");
    scanf("%s",s1); //scanf is terminated on white space or enter key which ever is encounted in input first
    printf("String = %s \n",s1);
} */

/* int main()
{
    char s1[20];
    printf("Specify String \n");
    scanf("%[A-Z]s",s1); //scanf is terminated on white space or enter key which ever is encounted in input first
    printf("String = %s \n",s1);
}
 */

/* int main()
{
    char s1[20];
    printf("Specify String \n");
    scanf("%[^.]s",s1); //scanf is terminated on white space or enter key which ever is encounted in input first
    printf("String = %s \n",s1);
}
 */

/* int main()
{
    char s1[20];
    printf("Specify String \n");
    gets(s1);   //gets teminates on enterkey //gets is dangerous to use dont use it 
    printf("String = %s \n",s1);    //instead use fgets function
} */

int main()
{
    char s1[20];
    printf("Specify String \n");
    fgets(s1,sizeof(s1),stdin);//take a input of max n-1 (19) chars and transfer to s1 identified memory on stack
    printf("String = %s\n",s1);
    printf("String = %sCheck string after input",s1);
}
//fgets treminates on two situations
//1. on n-1 situation //if input from user is more than n-1 chars then

//2. on newline char //if input from user is less than n-1 chars
                     //if fgets terminates on newline char then it actually stores newline char
                     //in memory followed by null

//if user enters string as today
//  T        o      d       a       y       \n       \0
//  100     101     102     103     104     105     106      107     108


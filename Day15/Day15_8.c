#include<stdio.h>
//read a character at time from file 
//1. read file sequentially

int main()
{
    char ch;
    FILE *fileptr;
    fileptr = fopen("Day15_1.c","r");

    if(fileptr == NULL)
    {
        printf("File is not present \n");
        return 0;
    }

    //read file sequentially
    printf("Cuurent file position = %ld\n",ftell(fileptr));

    while((ch = fgetc(fileptr))!=EOF)
    {
        printf("%c %ld \n",ch,ftell(fileptr)); //fputc(ch,stdout); //printf("%c",ch);
    }

    fclose(fileptr);
}
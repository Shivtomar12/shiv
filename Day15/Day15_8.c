#include<stdio.h>
//read a character at time from file 
//1. read file sequentially

int main()
{
    char buffer[80];
    FILE *fileptr;
    fileptr = fopen("Day15_1.c","r");

    if(fileptr == NULL)
    {
        printf("File is not present \n");
        return 0;
    }

    //read file sequentially
    printf("Current file position = %ld\n",ftell(fileptr));

    while(fgets(buffer,sizeof(buffer),fileptr)!=NULL)
    {
        printf("%s",buffer); 
    }

    fclose(fileptr);
    return 0;
}
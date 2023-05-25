#include<stdio.h>
//read a character at time from file 
//1. read file sequentially

int main()
{
    char buffer[80];
    FILE *fileptr,*dest;

    fileptr = fopen("Day15_1.c","r");

    if(fileptr == NULL)
    {
        printf("File is not present \n");
        return 0;
    }

    //if source file is present
    dest = fopen("xyz.txt","w");
    if(dest!=NULL)
    {
        //read file sequentially
        printf("Current file position = %ld\n",ftell(fileptr));

        while(fgets(buffer,sizeof(buffer),fileptr)!=NULL)
        {
            fputs(buffer,dest);//fputs(buffer,stdout);//printf("%s",buffer); 
        }
    }
    fclose(fileptr);
    return 0;
}
#include<stdio.h>
//read a character at time from file 
//1. read file sequentially
//2. read file randomly

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

    //read file randomly
    printf("Current file position =%d \n",ftell(fileptr));
    
    fseek(fileptr,5,SEEK_SET); //reposition fileptr 5 offset position ahead  from beginning of file
    ch = fgetc(fileptr);
    printf("Current file position =%d read char=%c\n",ftell(fileptr),ch);


    fseek(fileptr,-2,SEEK_CUR); //reposition fileptr 2 offset position back  from current position of file
    ch = fgetc(fileptr);
    printf("Current file position =%d read char=%c\n",ftell(fileptr),ch);

    fseek(fileptr,-2,SEEK_END); //reposition fileptr 2 offset position back  from end of file
    ch = fgetc(fileptr);
    printf("Current file position =%d read char=%c\n",ftell(fileptr),ch);


    fclose(fileptr);
}
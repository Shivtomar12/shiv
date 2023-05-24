#include<stdio.h>
//write 1 byte data to a file

int main()
{
    FILE *fileptr=NULL;
    char ch;
    //1. load file in memory
    //fopen("d:\\PreCAt-PH20\\Day15\\abc.txt",""); //fopen (filename,mode)   
    fileptr = fopen("abc.txt","w"); //if abc.txt is not present will be created newly
                           //if present will be loading same file  
    if(fileptr ==NULL)
    {
        printf("Access Denied !!!");
        return 0;
    }//on unsucess fopen will always return NULL

    //2. if file is loaded in memory write data to file
    //ch = 'A';
    
        while((ch=getchar())!=EOF)
        {
            fputc(ch,fileptr); //write a character which is in ch to a file associated to fileptr
        }

    //3. unload file from memory
    fclose(fileptr);//the one file which is associated to fileptr please unload
}
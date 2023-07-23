//Read data from file
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *FP=NULL;
    char ch;
    FP=fopen("E://C_Projects/Files/data.txt","r");
    if(FP==NULL)
    {
        printf("file not open: ");
    }
    else
    {
        while(1)
        {
            ch =fgetc(FP);
            if(ch==EOF)break;
            printf("%c",ch);   
        }
        fclose(FP);
    }

}
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen("E://C_Projects/Files/data.txt","r"); //source file
    fp2=fopen("E://C_Projects/Files/data_new.txt","w"); //new copy file

    if(fp1==NULL||fp2==NULL)
    {
        printf("Invalied file");
    }
    else
    {
        do
        {
            ch=fgetc(fp1);
            fputc(ch,fp2);
        } while (ch!=EOF);
        fclose(fp1);
        fclose(fp2);
        printf('File copied succesfully.....');
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    FILE *FP=NULL;
   FP=fopen("E://C_Projects/Files/edall.txt","w");
    if(FP==NULL)
    printf("File not generated");
    else
    {
        printf("Enter a charecter: ");
        ch = getche();
        fputc(ch,FP);
        fclose(FP);
        printf("\nFile created");
    }

}
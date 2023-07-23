#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *FP =NULL;
    char ch;
    FP = fopen("E://C_Projects/Files/data.txt","w");

    if(FP==NULL)
    {
        printf("File not created");
    }   
    else
    {
    printf("Enter the string: ");
        while(1)    
        {
            ch=getche();
                if(ch=='0')break;
            fputc(ch,FP);
        }
        fclose(FP);
    printf("\nFile created");

    }

}

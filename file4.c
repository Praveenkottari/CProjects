#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    int ns=0,nc=0,nl=0;
    char ch;

    fp=fopen("E://C_Projects/Files/data.txt","r");

    if(fp==NULL)
    {
        printf("Invalid file");
    }
    else
    {
        do
        {
            ch =getc(fp);
            if(ch==' ')
                ns++;
            if(ch=='\n')
                nl++;
            else
                nc++;
        } while (ch!=EOF);
    printf("\nTotal number of charecter: %d",nc);
    printf("\nTotal number of space: %d",ns);
    printf("\nTotal number of line: %d",nl);
    }
}
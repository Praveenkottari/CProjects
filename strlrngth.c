#include <Stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
    char str1[100];
    int i;

    printf("Enter the string 1:");
    gets(str1);

    i=0;

    while(str1[i]!='\0')
    {
        i++;   
    }
    printf("length of the string is %d",i);
}
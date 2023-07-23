#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
    char str[100];
    int i;

    printf("enter the charecter:");
    scanf("%s",str);

    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
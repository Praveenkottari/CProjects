#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string: ");
    gets(str);

    puts(strlwr(str));

    return 0;
}
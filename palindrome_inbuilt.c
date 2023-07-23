#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
    char str1[100],str2[100];
    int x;

    printf("Enter the string:");
    gets(str1);
    strcpy(str2,str1);

    strrev(str2);
    //puts(str1);
    //puts(str2);

    x = strcmp(str2,str1);

    if(x ==0)
    {
        printf("The string is palindrome: ");
    }
    else
    printf("The string is not palindrome");

    return 0;

}
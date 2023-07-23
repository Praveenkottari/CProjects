//The functions in C

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100],str1[100];
    int t,rev,x;

    printf("Enter the string: ");
    gets(str);

    strcpy(str1,str);

    /*strlen(str);
    printf("The length of the string is %d\n",t);*/

    puts(strrev(str));

    printf("\nThe original string is: %s",str1);
    printf("\nThe reverse string is: %s",str);

    x=strcmp(str1,str);

    printf("\n%d",x);


    return 0;
}



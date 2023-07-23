#include <stdio.h>
#include <conio.h>

void main()

{
    char ch;

    printf("Enter a charecter: ");
    ch = getche();

    ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'?printf("\n%c is vowel",ch):printf("\n %c is consonent",ch);

    getch();

}
#include <stdio.h>
#include<conio.h>

void main()

{
    char ch1,ch2,ch3,ch4;

    printf("Enter the password:\n");

    
    ch1 = getch();
    printf("*");

    
    ch2 = getch();
    printf("*");

    
    ch3 = getch();
    printf("*");

    
    ch4 = getch();
    printf("*");

    printf("\n Your password is : %c %c %c %c",ch1,ch2,ch3,ch4);


}
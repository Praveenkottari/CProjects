#include <stdio.h>
#include <conio.h>

int main()

{
    int a,b;

    printf("Enter 1st Number\n");
    scanf("%d",&a);
    
    printf("Enter 2nd Number\n");
    scanf("%d",&b);

    printf("Number Before swapping %d %d",a,b);

    a = a+b;

    b = a-b;

    a = a-b;

     printf("\nNumber After swapping %d %d",a,b);




    return 0;

}
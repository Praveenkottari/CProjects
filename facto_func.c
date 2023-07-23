#include <stdio.h>
#include <conio.h>

int facto(int);
void main()
{
    int x,y;
    printf("Enter the numnber: ");
    scanf("%d",&x);

    y=facto(x);
    printf("Factorial of %d is: %d",x,y);

}

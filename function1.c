#include <stdio.h>
#include <conio.h>

void addition();
void main()
{
    printf("Start program\n");
    addition();
    printf("\nEnd Program");
}
    void addition()
{
    int a,b,c;
    printf("\nEnter Two numbers:\n");
    scanf("%d %d",&a,&b);

    c=a+b;
    printf("\nsum of the number is %d",c);
}
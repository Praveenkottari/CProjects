#include <stdio.h>
#include <conio.h>

void main()

{
    int n;

    printf("Enter a number:");
    scanf("%d",&n);

    n>=0?printf("Number %d is possitive",n):printf("Number %d is negative",n);

    getch();



}
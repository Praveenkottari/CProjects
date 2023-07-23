#include <stdio.h>
#include <conio.h>
#include "E:\C Projects\header\facto.h"
void main()
{
    float r,x;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    x=area(r);

    printf("\nThe area of the circle is: %f",x);

}
#include <stdio.h>
#include <conio.h>

#define pi 3.142

int main()

{
    float r, a;

    printf("Enter the radius of the circle: \n");

    scanf("%f",&r);

    a = pi*r*r;

    printf("\nArea of the circele is %f",a);

    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define g 9.81

void main()
{

    int w;
    float v_cruise, cl = 0.7,den=0.664,s;

    printf("Enter weight of the model: ");
    scanf("%d",&w);

    printf("Enter Planeform area: ");
    scanf("%f",&s);

    v_cruise = sqrt((2*w*g)/(den*cl*s));

    printf("Velocity of the model at this conditon : %f",v_cruise);

    getch();

}
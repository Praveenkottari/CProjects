#include <stdio.h>
#include<conio.h>

int main()

{
    float a,b,c,d,T,avg;

    printf("Enter mark1: ");
    scanf("%f",&a);

    printf("Enter mark2: ");
    scanf("%f",&b);

    printf("Enter mark3: ");
    scanf("%f",&c);

    printf("Enter mark4: ");
    scanf("%f",&d);

    T = a+b+c+d;

    printf("\nTotal mark scored is %f",T);

    avg = T/4;

    printf("\nPercentage scored %f ",avg);

    return 0;

}
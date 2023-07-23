#include<stdio.h>
#include<conio.h>

int main()

{
    float a,b;
    float c;

    printf("Enter 1st numbers: \n");
    scanf("%f",&a);
    
    scanf("%f",&b);

    c= a+b;
    printf("sum of %f and %f is %2.1f\n",a,b,c);

    c = a-b;
    printf("difference of %f and %f is %2.1f\n",a,b,c);

    c= a*b;

    printf("product of %f and %f is %3.1f\n",a,b,c);

    c = a/b;
    printf("division of %f and %f is %2.1f\n",a,b,c);

    return 0;
}
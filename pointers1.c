#include <stdio.h>
#include <conio.h>
int main()

{
    int a=10,*p,**r;

    p=&a;
    r=&p;
    
    // ++*p;
    // ++a;

    printf("Value of a is %d",a);
    printf("\nadress of a is %u",&a);
    printf("\nValue of *p is %d",*p);
    printf("\nvalue of p is %d",p);
    printf("\nadress of p is %u",&p);
    printf("\nadress of *p is %u",&*p);
    printf("\nVlaur of **r is %d",**r);
    printf("\nadress of r is %u",&r);
    printf("\nadress of *r is %u",&*r);

return 0;
}
#include <stdio.h>
#include <conio.h>

void main()

{
    int a,b,c,d,e,f,g;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    e = a>b?a:b;
    f = c>d?c:d;

    g = e>f?e:f;


    printf("The Greater Number is : %d",g);

    getch();
}
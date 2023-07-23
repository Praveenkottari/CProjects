#include <stdio.h>
#include <conio.h>

void main()

{
    int m,n,s=0,r;
    printf("Enter the number: ");
    scanf("%d",&n);

    m =n;

    while(n!=0)
    {
        r = n%10;
        s= s+ (r*r*r);
        n/=10;

    }
    if(m==s)
    {
        printf("The %d is Armstrong number",m);
    }
    else
    {
        printf("The %d is not Armstrong number",m);
    }


}
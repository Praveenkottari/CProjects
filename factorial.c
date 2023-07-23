#include <stdio.h>
#include <conio.h>

int main()

{
    int f=1;
    int n;
    int a;

    printf("Enter the number:");
    scanf("%d",&n);

    a=n;

    while(n!=0)
    {
        f = f*n;
        n--;
    }
    printf("The factorial of the number %d is %d",a,f);

    return 0;
}
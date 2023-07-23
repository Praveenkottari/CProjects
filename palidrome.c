#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,s=0,r;

    printf("Enter a number:");
    scanf("%d",&n);

    m=n;

    while(n!=0)
    {
        r = n%10;
        s=s*10+r;
        n/=10;
       
    }
     printf("Reverse of the number %d is %d",m,s);

    if(m==s)
    {
        printf("\nNumber is palidrome");
    }

    else
    {
        printf("\nNumber is not palindrome");
    }

    return 0;
}

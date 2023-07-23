#include <stdio.h>
#include <conio.h>
int rev(int n);

void main()
{
    int n,x;
    printf("Enter the number: ");
    scanf("%d",&n);

    x=rev(n);
    printf("Reverse number %d ",x);  
}
int rev(int n)
{
   static int s=0;
   int r;
    if(n==0)
    return(s);
    r =n%10;
    s=s*10+r;
    n = n/10;
    rev(n);
}
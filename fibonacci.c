#include <stdio.h>
#include <conio.h>

int main()
{
    int a=0,b=1,c,n,i=1,sum;

    printf("Enter the number of terms of fibonacci series:");
    scanf("%d",&n);

    if(n==1)
    {printf("%d",a);
    }


    else
    if(n==2)
    {
        printf("%d %d",a,b);
    }

    if(n>2)
    {
        printf("%d %d",a,b);
        while(i<= n-2)
        {
            
            c = a+b;
            printf(" %d ",c);
            a=b;
            b=c;

            i++;      

        }

        printf("\nsum of %d fibonaciseries is %d",n,sum);
    }


    return 0;
}
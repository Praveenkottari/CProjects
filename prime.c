#include <stdio.h>
#include <conio.h>

int main()

{
    int n,i=2,f=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i ==0)
        {
            f =1;
            break;
        }
        i++;
    }

    if(f==0)
    {
        printf("Thr number %d is prime",n);
        
    }
    else{
        printf("Thr number %d is not prime",n);
    }

    return 0;

}
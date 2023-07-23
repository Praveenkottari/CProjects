#include <stdio.h>
#include <conio.h>

int main()
{
    int n=0,ar[n],i,sum=0;

    printf("Enter the size of number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&ar[i]);

        sum = sum + ar[i];
    }

    printf("The numbers are: ");

    for(i=0;i<n;i++)
    {
        printf("\n %d",ar[i]);
    
    }
    printf("\nThe sum of numbers are %d",sum);

    return 0;
}
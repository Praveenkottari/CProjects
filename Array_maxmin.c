#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[500],i,n,max,p,min,q;
    xyz: printf("\nEnter the limit:");
    scanf("%d",&n);

    if(n>500)
    {
        printf("Enter value from 0 to 500");
        goto xyz;
    }

    printf("----Enter the elements----");

    for(i=0;i<n;i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    max =ar[0];
    p=0;
    for(i=1;i<n;i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
            p=i;
        }
    }
    min=ar[0];
    q=0;
    for(i=1;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
            q=i;
        }
    }
    printf("\nThe maximum value in the limit is: %d",max);
    printf("\nThe position of maximum value in the limit is: %d",p+1);
    printf("\nThe minimum value in the limit is: %d",min);
    printf("\nThe position of minimum value in the limit is: %d",q+1);
    
    return 0;

}
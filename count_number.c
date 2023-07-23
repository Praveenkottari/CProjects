#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[50],count=0,i,n,*p;

    printf("Enter count of numbers: ");
    scanf("%d",&n);

    printf("\nEnter numbers: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    // printf("\nThe numbers are: ");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
    p=&ar;

    while(*p!='\0')
    {
        printf(" %u ",p);

        ++p;
    }


    


    
    
return 0;
}

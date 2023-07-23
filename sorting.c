#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[500],n,i,j,temp;

    xyz:printf("Enter the limit: ");
    scanf("%d",&n);

    if(n>500)
    {
        printf("Enter number between 1 to 500\n");
        goto xyz;
    }
    for(i=0;i<n;i++)
        {  
        printf("Enter no %d: ",i+1);
        scanf("%d",&ar[i]);
        }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[j]<ar[i])
            {
                temp = ar[i];
                ar[i]=ar[j];
                ar[j] = temp;

            }
        }
        
    }
    printf("----sorted numbers----");
        for(i=0;i<n;i++)
        {
            printf("\n%d",ar[i]);
        }


return 0;
}
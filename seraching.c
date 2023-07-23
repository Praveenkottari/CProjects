#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[500],i,n,s,p,f=0;

    printf("Enter the limit: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("\nEnter seraching number:");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(ar[i]==s)
        {
            p=i;
            f=1;
        
        }    
    }
    if(f==1)
    {
         printf("\nserach found at entry %d",p+1);
        
    }
    else
    {
        printf("serach not found");
    }
return 0;
}
#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[500],n,i,j,temp,begn,end,mid,s,f=0;

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

    printf("Enter element to serach: ");
    scanf("%d",&s);

    begn=0;
    end=n-1;

    while(begn<=end)
    {
        mid = (begn+end)/2;
        if(s== ar[mid])
        {
            f=1;
            break;
        }
        else
        if(s>ar[mid])
        begn=mid+1;
        else
        end = mid-1;
    }
    if(f==1)
    {
        printf("Seraching is sucess"); 
    }
    else
    printf("Seraching is not sucess");

return 0;
}

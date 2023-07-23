//Matrix operation

#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[50][50],r,c,n,a=0;

    printf("Enter the dimesnion of square natrix:");
    scanf("\n %d",&n);

    printf("\nEnter the matrix element:\n");

    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("Enter the %d,%d element: ",r,c);
            scanf("%d",&ar[r][c]);
        }
    }
    printf("\n----The matrix----\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",ar[r][c]);
        }
    printf("\n");
    }

    printf("\n----The transpose of the matrix----\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",ar[c][r]);
        }
    printf("\n");
    }

    printf("----The Diagonal matrix----\n");

     for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r==c)
            {
                printf("%5d",ar[r][c]);
            }
            if(r<c||r>c)
                {
                    printf("%5d",a);
                }
        }
    printf("\n");
    }

    printf("\n----The Lower trinagular matrix----\n");

    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r>=c)
            {
                printf("%5d",ar[r][c]);
            }
            if(r<c)
                {
                    printf("%5d",a);
                }
        }
    printf("\n");
    }
    printf("\n----The Upper trinagular matrix----\n");
    
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r<=c)
            {
                printf("%5d",ar[r][c]);
            }
            if(r>c)
                {
                    printf("%5d",a);
                }
        }
    printf("\n");
    }    
    return 0;
}
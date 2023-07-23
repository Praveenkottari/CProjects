//Matrix multiplication

#include <stdio.h>
#include <conio.h>

int main()
{
    int a1[50][50],b1[50][50],c1[50][50],r,c,k,m,n;

    printf("Enter order of the matrix m,n: ");
    scanf("%d %d",&m,&n);

    printf("\nEnter the elements of 1st matrix:\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&a1[r][c]);
        }
    }
    printf("\nEnter the elements of 2nd matrix:\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&b1[r][c]);
        }
    }
    //print matrix
    printf("\n-----First matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",a1[r][c]);
        }
    printf("\n");
    }
    printf("\n-----Second matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",b1[r][c]);
        }
    printf("\n");
    }

    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            c1[r][c] =0;
        }
    }

    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            for(k=0;k<m;k++)
            {
                c1[r][c] = c1[r][c] + (a1[r][k] * b1[k][c]);
            }
        }
    }
    printf("\n-----The Product of Two matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",c1[r][c]);
        }
    printf("\n");
    }


return 0;
}
//matrix addition,subtarction
#include<stdio.h>
#include<conio.h>

int main()
{
    int A[50][50],B[50][50],C[50][50],r,c,m,n;

    printf("Enter the order of the matrix m n: ");
    scanf("%d %d",&m,&n);

    printf("\n-----Enter First matrix Data-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("\nEnter matrix A %d,%d element: ",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    printf("\n-----Enter Second matrix Data-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("\nEnter matrix A %d,%d element: ",r,c);
            scanf("%d",&B[r][c]);
        }
    }

    printf("\n-----The First matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",A[r][c]);
        }
    printf("\n");
    }

    printf("\n-----The Second matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",B[r][c]);
        }
    printf("\n");
    }
    //addtion of two numbers
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            C[r][c] = A[r][c] + B[r][c];
        }
    }
    printf("\n----- The Additon of A and B matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",C[r][c]);
        }
    printf("\n");
    }
    //substraction of two numbers
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            C[r][c] = A[r][c] - B[r][c];
        }
    }
    
    
    printf("\n----- The Substraction of A and B matrix-----\n");
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",C[r][c]);
        }
    printf("\n");
    }

    return 0;
}


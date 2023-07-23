#include <stdio.h>
#include <conio.h>

int main()
{
    int ar[3][3],r,c;

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\nEnter the matrix entry %d,%d: ",r,c);
            scanf("%d",&ar[r][c]);
        }
    }

    printf("\nThe matrix is:\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf(" %d ",ar[r][c]);
        }
        printf("\n");
    }
    return 0;
}
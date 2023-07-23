#include <stdio.h>
#include <conio.h>

int main()

{
    int n,i,a;

    printf("Emter the number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        a = i*n;
        printf("\n %d X %d = %d",n,i,a);
    }

    return 0;


}
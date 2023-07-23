#include <stdio.h>
#include <conio.h>

void main()
{
    int i=1,n,a;

    printf("Enter the limit:");
    scanf("%d",&n);


    while(i<=10)
    {
     a= n*i;
     printf("%d X %d = %d\n",n,i,a);

     ++i;
    }

getch();


}
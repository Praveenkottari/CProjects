#include <stdio.h>
#include<conio.h>

int swap(int *,int *);

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("\nBefore swap: %d %d",a,b);

    swap(&a,&b);


    printf("\nNumber after swap: %d %d",a,b);

}
int swap(int*a,int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
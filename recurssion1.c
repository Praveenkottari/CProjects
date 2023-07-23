#include <stdio.h>
#include <conio.h>
void display(int n);
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    display(n);
}
void display(int n)
{
    static int i=1;
    if(i>n)
    return;
    printf("%d ",i);
    i++;
    display(n);
}
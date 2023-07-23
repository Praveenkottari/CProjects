//Menu driven code using swapping

#include <stdio.h>
#include <conio.h>

int main()

{
    int choice,a,b,c;

    printf("----------menu-----------");
    printf("\n 1:Addition \n 2:Swapping \n 3:Maximum ");
    printf("\n--------------------------");
    printf("\nEnter your choice:");
    scanf("%d",choice);
    printf("\n--------------------------");


    switch(choice)
    {
    case 1: 
    {
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);

    c= a+b;
    printf("Addition of two number is : %d",c);
    break;
    }
    case 2: 
    {
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Number before swapping %d %d",a,b);
    c= a+b;
    b=c-a;
    a=a-b;
    printf("Number After swapping %d %d",a,b);            
    break;
    }

    case 3: 
    {
    printf("\nEnter two numbers:");
    scanf("%d %d",&a,&b);

    if(a>b)
    printf("%d is greater number",a);
    else
    printf("%d is greater number",b);
    break;
    }

        
    }

    getch();

}
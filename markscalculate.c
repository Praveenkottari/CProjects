#include <stdio.h>
#include <conio.h>

void main()

{
    int p,c,m,e,totl;

phy: printf("physics marks: ");
    scanf("%d",&p);

    if(p>100)
    {
    printf("Enter valid marks ");
    goto phy;
    }   

che: printf("chemistry marks: ");
    scanf("%d",&c);
    if(c>100)
    {
    printf("Enter valid marks ");
    goto che;
    }   


mth: printf("maths marks: ");
    scanf("%d",&m);
    if(m>100)
    {
    printf("Enter valid marks ");
    goto mth;
    }   


elct: printf("electronics marks: ");
    scanf("%d",&e);
    if(e>100)
    {
    printf("Enter valid marks ");
    goto elct;
    }

    totl = p+c+m+e;
    printf("Total marks enterred: %d",totl);   


    getch();
}

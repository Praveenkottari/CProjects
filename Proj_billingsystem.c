//Billing system generation
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct bill
{
    char name[50];
    int price;
    int id;
    int qty;
}; struct bill b[5];
void main()
{
    int n,i,total=0;
    fflush(0);
    printf("Enter the number of items: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the item ID: ");
        scanf("%d",&b[i].id);


        printf("\nEnter item Name: ");
        scanf("%s",b[i].name);

        printf("\nEnter the price of the item: ");
        scanf("%d",&b[i].price);

        printf("\nEnter quantity of the item: ");
        scanf("%d",&b[i].qty);
    }

    printf("\n--------------------------------------------\n");
    printf("\n----------List of the item----------\n");
    printf("\nID\tName\tPrice\tQuantity\tAmount\n");
    printf("---------------------------------------------------");

    {
        for(i=0;i<n;i++)
        {
           printf("\n%d\t%s\t%d\t\t%d\t%d",b[i].id,b[i].name,b[i].price,b[i].qty,(b[i].price*b[i].qty));
           printf("\n");
           total = total+(b[i].price*b[i].qty);
        }
    printf("\n---------------------------------------------------");
    printf("\n\t\t\t\tTotal Amount: %d",total);
    printf("\n---------------------------------------------------");
    }

}
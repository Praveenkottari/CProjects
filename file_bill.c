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
    FILE *fp;
    int n,i,total=0;

    fflush(0);
    printf("Enter the number of items: ");
    scanf("%d",&n);

    fp=fopen("E:/C_Projects/Files/bill.txt","w");
    
    if(fp==NULL)
        {
            printf("Invalid file");
        }
        
    else
    {
        for(i=0;i<n;i++)
        {
            printf("\nEnter the item ID: ");
            scanf("%d",&b[i].id);


            printf("\nEnter item Name: ");
            //gets(b[i].name);
            scanf("%s",b[i].name);

            printf("\nEnter the price of the item: ");
            scanf("%d",&b[i].price);

            printf("\nEnter quantity of the item: ");
            scanf("%d",&b[i].qty);
        }
    }

        fprintf(fp,"\n--------------------------------------------\n");
        fprintf(fp,"\n----------List of the item----------\n");
        fprintf(fp,"\nID\tName\tPrice\tQuantity\tAmount\n");
        //fprintf(fp,"---------------------------------------------------");

        {
            for(i=0;i<n;i++)
            {
            fprintf(fp,"\n%d\t%s\t%d\t\t%d\t%d",b[i].id,b[i].name,b[i].price,b[i].qty,(b[i].price*b[i].qty));
            fprintf(fp,"\n");
            total = total+(b[i].price*b[i].qty);
            }
        fprintf(fp,"\n---------------------------------------------------");
        fprintf(fp,"\n\t\t\t\tTotal Amount: %d",total);
        fprintf(fp,"\n---------------------------------------------------");
        }

}
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int rno;
    char name[50];
    double per;
};struct student s[5];
void main()
{
    int i;
    fflush(0);
    for(i=0;i<5;i++)
    {   
        printf("\n");

        fflush(0);
        printf("Enter roll number of the student%d: ",i+1);
        scanf("%d",&s[i].rno);
        
        fflush(0);
        printf("\nEnter name of the student%d: ",i+1);
        scanf("%s",s[i].name);

        fflush(0);
        printf("\nEnter percentage of the student%d: ",i+1);
        scanf("%lf",&s[i].per);
    }

    printf("------student information------");
    printf("\nName \tRollno\tPercentage\n");
    for(i=0;i<5;i++)
    {
        printf("%s",s[i].name);
        printf("\t %d",s[i].rno);
        printf("\t%6.2lf",s[i].per);
        printf("\n");
    }
}

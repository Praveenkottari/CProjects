#include <stdio.h>
#include <conio.h>

struct student
{
    int rno;
    char name[50];
    float per;
};struct student s1;
void main()
{
    printf("Enter name of the student: ");
    gets(s1.name);

    printf("\nEnter roll number: ");
    scanf("%d",&s1.rno);

    printf("\nEnter percentage: ");
    scanf("%f",&s1.per);

    printf("\nName of the student: %s",s1.name);
    printf("\nRoll No of the student: %d",s1.rno);
    printf("\nPercentage of the student: %3.2f",s1.per);
}

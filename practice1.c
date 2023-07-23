#include <stdio.h>

/* Table of any number input give by the user*/
int main()

{
    int n;
    printf("Enter The number: ");
    scanf("%d",&n);
    for (int i =1; i<=10; ++i) {
      printf("%d * %d = %d \n",n,i,n*i);
    }

    return 0;

}

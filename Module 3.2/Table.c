//WAP to print table up to given numbers
#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=10 ; j++)
        {
            printf("%d x %d = %d ",i,j,i*j);
            printf("\t");
        }
        printf("\n");
    }
}
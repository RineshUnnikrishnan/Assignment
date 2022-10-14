//Write a program you have to make a summation of first and last Digit
#include<stdio.h>
void main()
{
    int rem1,rem,sum,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    rem=n%10;
    while(n>0)
    {
        rem1=n%10;
        n=n/10;
    }
    sum=rem+rem1;
    printf("\n%d",sum);
}
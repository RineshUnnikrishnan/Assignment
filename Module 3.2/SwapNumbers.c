//WAP to swap two numbers without using third variable 
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the first integer : ");
    scanf("%d",&a);
    printf("Enter the second integer : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nSwaping the value of integers, now a is %d and b is %d",a,b);
}
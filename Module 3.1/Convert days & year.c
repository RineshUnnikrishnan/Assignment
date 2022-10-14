//Program to convert years into days and days into years
#include <stdio.h>
void main() {
	int a,b ;
	printf("Enter number of years : ");
	scanf("%d",&a);
	printf("Total number of days : %d \n",a*365);
	printf("Enter number of days : %d");
	scanf("%d",&b);
	printf("Total number of year : %d",b/365);
} 

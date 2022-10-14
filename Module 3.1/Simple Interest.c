//Program to find simple interest
#include<stdio.h>
void main() {
	float a,y=5,p=7.4;
	printf("Enter the amount : Rs. ");
	scanf ("%f8",&a);
	printf("Tenure : 5 years \n");
	printf("Interest rate : 7.40 per cent \n");
	printf("Amount to be paid = Rs. %f",a*y*p/100);
}

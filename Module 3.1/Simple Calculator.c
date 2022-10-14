//Program to make simple calculator
#include<stdio.h>
void main(){
	int a,b,c ;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Addition of a, b and c = %d \n",a+b+c);
	printf("Subtraction of a, b and c = %d \n",a-b-c);
	printf("Division of a and b = %d \n",a/b);
	printf("Multiplication of a, b and c = %d \n",a*b*c);
	printf("Modulus of a and c = %d \n",a%c);	
}

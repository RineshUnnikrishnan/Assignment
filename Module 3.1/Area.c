//Program to find area of circle, rectangle and triangle
#include<stdio.h>
#define pi 3.14
void main() {
    float r,l,b,u,v ;
    printf("Enter radius of the circle r : ");
    scanf("%f",&r);
    printf("Area of circle : %f \n",pi*r*r);

    printf ("Enter length of the rectangle l : ");
    scanf("%f",&l);
    printf("Enter breadth of the rectangle : ");
    scanf("%f",&b);
    printf("Area of rectangle : %f \n",l*b);
    
    printf("Enter the base of the triangle u : ");
    scanf("%f",&u);
    printf("Enter the height of the triangle v : ");
    scanf("%f",&v);
    printf("Area of triangle : %f \n",u*v/2);
}

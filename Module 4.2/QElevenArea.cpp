/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
 Rectangle: Area * breadth 
 Triangle: ½ *Area* breadth 
 Circle: Pi * Area *Area*/

 
#include<iostream>
using namespace std;
class Area
{
    public:
		void area(int Length,int Breadth)
		{
   			cout<<"Area of Rectangle: "<<Length*Breadth<<endl;
		}

		void area(double Height,double Base)
		{
    		cout<<"Area of Triangle:"<<0.5*Base*Height<<endl;
		}

		void area(float Radius)
		{
   			cout<<"Area of Circle:"<<3.14*Radius*Radius<<endl;
		}
};

int main()
{
	Area ar;
	ar.area(9,8);
	ar.area(7.5,6.5);
	ar.area(5);
}
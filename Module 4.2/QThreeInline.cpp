/*Write a program to find the multiplication values and the cubic values using inline function*/

#include<iostream>
using namespace std;

class InliFun
{
    private :
	int x,y ;
	
	public :
	InliFun()
	{
		cout<<"Enter the first digit : ";
		cin>>x;
		cout<<"Enter the second digit  : ";
		cin>>y;	
	}	
	inline void multiply()
	{
		cout<<"Multiplication Value : "<<x*y<<endl;
	}
	inline void cube()
	{
		cout<<"First Digit Cube = "<<x*x*x<<endl;
		cout<<"Second Digit Cube = "<<y*y*y<<endl;
	}

};

int main()
{
	InliFun inli;
	inli.multiply();
	inli.cube();
}
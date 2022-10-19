/*Write a program of Addition, Subtraction, Division, Multiplication using constructor*/

#include<iostream>
using namespace std;

class Calculator
{
    private :
	int x,y,z;
	
	public : 
	Calculator()
	{
		cout<<"Enter the first number : ";
		cin>>x;
		
		cout<<"Enter the second number : ";
		cin>>y;
	}
	void add()
	{
		z=x+y ;
		cout<<"Addition : "<<z<<endl;
	}
	void sub()
	{
		z=x-y ;
		cout<<"Substraction : "<<z<<endl;
	}
	void multiply()
	{
		z=x*y;
		cout<<"Multiplication : "<<z<<endl;
	}
	void divide()
	{
		z=x/y;
		cout<<"Division : "<<z<<endl;
	}
};

int main()
{
	Calculator calc ;
    int ch;
    cout << endl
         << "1. Addition";
    cout << endl
         << "2. Substraction";
    cout << endl
         << "3. Multiplication";
    cout << endl
         << "4. Division";
    cout << endl
         << "Enter a number : ";
    cin >> ch;

    if (ch==1)
    {
        calc.add();
    }
    else if (ch==2)
    {
        calc.sub();
    }
    else if (ch==3)
    {
        calc.multiply();
    }
    else if (ch==4)
    {
        calc.divide();
    }
    else
    {
        cout <<"Invaild choice"<< endl;
    }
}

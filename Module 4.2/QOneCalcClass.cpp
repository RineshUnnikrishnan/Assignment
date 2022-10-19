/*WAP to create simple calculator using class */

#include<iostream>
using namespace std;

class  Calculator
{
     private :
	int c ;

	public :
	int add(int d , int e)
	{
		c = d + e ; 
		return c ;
	}
	int sub(int l , int m)
	{
		c = l - m ;
		return c ;	
	}	
	int multi(int n , int o)
	{
		c = n * o ;
		return c ;
	}
	int div(int p , int q)
	{
		c = p / q ;
		return c ;
	}
};

int main()
{
	int a ,b ;
	cout<<"Enter the first digit : ";
	cin>>a;
	cout<<"Enter the second digit : ";
	cin>>b;

    int num , result;

    cout <<endl<< "1. Addition";
    cout <<endl<< "2. Substraction";
    cout <<endl<< "3. Multiplication";
    cout <<endl<< "4. Division";
    cout <<endl<< "Enter a number : ";
    cin >> num;
    cout << "\n";

    Calculator calc;
    if (num==1)
    {
        cout << "Result : " <<calc.add(a, b)<<endl;
    }
    else if (num==2)
    {
        cout << "Result : " <<calc.sub(a, b)<<endl;
    }
    else if (num==3)
    {
        cout << "Result : " <<calc.multi(a, b)<<endl;
    }
    else if (num==4)
    {
        cout << "Result : " <<calc.div(a, b)<<endl;
    }
    else
    {
        cout << "Invaild number";
    }
}
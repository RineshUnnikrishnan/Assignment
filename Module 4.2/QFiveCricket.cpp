/*Assume a class cricketer is declared. Declare a derived class batter from cricketer. Data member of batter. 
Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>
using namespace std;

class cricketer
{
	protected :
	string name = "Kholi";
	int age = 34;
	public :	
};

class batter : public cricketer
{
	int t_r ;
	int avg ;
	int b_p ;
	int i ;
	
	public :
	void inp(int inings)
	{
		i = inings ;
		cout<<"Total runs : ";
		cin>>t_r;
		
		cout<<endl<<"Best Performance : ";
		cin>>b_p;
	}
	void average()
	{
		avg = t_r / i;
	}
	void display()
	{
		cout<<"name = "<<name<<endl;
		cout<<"age = "<<age<<endl;
		cout<<"total run = "<<t_r<<" in "<<i<<" inings."<<endl;
		cout<<"average = "<<avg<<endl;
	}
};

int main()
{
	int inings;
	cout<<"Enter the inings : ";
	cin>>inings; 
	
	batter obj ;
	obj.inp(3);
	obj.average();
	obj.display();
}
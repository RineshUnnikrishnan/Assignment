/*Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		
	public:
		void per(int a, string n)
		{
			name = n;
			age = a;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}	
};

class Student: Person
{
	private:
		float percentage;
		
	public:
		void stud(string n, int a, float p)
		{
			percentage = p;
			per(a,n);
		}
		void d_s()
		{
			cout<<"_________Student details are________\n"<<endl;
			display();
			cout<<"Prcentage : "<<percentage<<endl;
		}
};

class  Teacher: Person
{
	private:
		float salary;
		
	public:
		void teach(string n, int a, float s)
		{
			salary = s;
			per(a,n);
		}
		void d_t()
		{
			cout<<"________Teachers details are________\n"<<endl;
			display();
			cout<<"Salary: "<<salary<<endl;
		}
};

int main()
{
	Student std;
	std.stud("Mark",21,74);
	std.d_s();
    
	Teacher tch;
	tch.teach("Denis",34,97000);
	tch.d_t();
}
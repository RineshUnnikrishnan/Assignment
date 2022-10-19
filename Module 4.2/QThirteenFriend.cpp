/*Write a program to find the max number from given two numbers using 
friend function*/

#include<iostream>
using namespace std;

class Maxim
{
    int a,b;
    public:
    	
    Maxim()
	{
    	cout<<"Enter the first value : ";
    	cin>>a;
   		cout<<"Enter the second value: ";
    	cin>>b;
    }
    friend void max(Maxim obj);
};
void max(Maxim obj)
{
    int max;
    max=obj.a>obj.b?obj.a:obj.b;
    cout<<"Maximum number:"<<max;
}
int main()
{
    Maxim obj1;
    max(obj1);
}
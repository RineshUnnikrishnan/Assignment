/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include<iostream>
using namespace std;
#define N 2

class Matrix
{
    private:
	int a[10];

	public:
		void Input()
		{
   			for (int i = 0; i < N; i++)
    		{
   		    	cout<<"Enter the value :";
    	    	cin>>a[i];
    		}
		}

		void display()
		{
			for(int i=0 ; i<N; i++)
    		{
     		   cout<<a[i]<<"\t";
    		}
    		cout<<endl;
		}

		void operator+(Matrix m)
		{
    		int temp[10];
    		
    		for (int i = 0; i < N; i++)
    		{
    		    temp[i]=a[i]+m.a[i];
    		}
    		
    		cout<<"Sum of the Matrix : ";
    		for (int i = 0; i < N; i++)
    		{
    		    cout<<temp[i]<<"\t";
    		}
		}
};

int main()
{
    Matrix mtr1;
    Matrix mtr2;
    
    cout<<"Enter values for the first matrix : "<<endl;
    mtr1.Input();
    cout<<"Enter values for the second matrix : "<<endl;
    mtr2.Input();
    cout<<" Value of Matrix one : ";
    mtr1.display();
    cout<<" Value of matrix two : ";
    mtr2.display();

    mtr1+mtr2;
}
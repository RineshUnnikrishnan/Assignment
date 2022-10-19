/* Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>
using namespace std;

class Maths
{
private:
    int a, b;

public:
    void calc(int x, int y)
    {
        cout << "Addition of Two numbers : "<<x+y<<endl;
    }
     void calc(double p, int q)
    {
        cout << "Subtraction of Two numbers : "<<p-q<<endl;
    }
     void calc(float d, int e)
    {
        cout << "Multiplication of Two numbers : "<<d*e<<endl;
    }
     void calc(double l, double m)
    {
        cout << "Division of Two numbers : "<<l/m<<endl;
    }
};

int main()
{
    Maths obj1;
    obj1.calc(1,2);
    obj1.calc(99.9,3);
    obj1.calc(999.9,100.00);
}
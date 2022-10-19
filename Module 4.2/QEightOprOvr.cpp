/*Write a program to concatenate the two strings using Operator Overloading*/

#include <iostream>
#include <string.h>
using namespace std;

class Concatenate
{
private :
    char op[10];

public:
    void input()
    {
        gets(op);
    }
    void display()
    {
        puts(op);
    }
    void operator+(Concatenate obj)
    {
        strcat(op, obj.op);
        cout << op;
    }
};

int main()
{
    Concatenate opr;
    Concatenate oprt;

    cout << "Enter the first string : ";
    opr.input();

    cout << "Enter the second string : ";
    opr.input();

    cout << "First String : ";
    oprt.display();

    cout << "Second String : ";
    oprt.display();

    opr + oprt;
}
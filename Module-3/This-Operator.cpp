#include<iostream>
using namespace std;

class Operator
{
public:
    int a = 85;
    void data()
    {
        int a = 42;
        cout<< endl<< "Value of the local variable a is: "<< a;
        cout<< endl<< "Value of the data member variable a is: "<< this-> a;

    }
};

int main()
{
    Operator o1;
    o1.data();
}
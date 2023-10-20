#include<iostream>
using namespace std;
int array[10] = {5,9,51,3,758,35,7486};
class GrandParent
{
public:
    GrandParent()
    {
        cout<<"Grand Parent Constructor Called\n";
    };
};
class Parent:public GrandParent
{
public:
    Parent()
    {
        cout<<"Parent Constructor Called\n";
    }
};
class Child : public Parent{
public:
    Child(){
        cout << "Child Constructor Called \n";
    }
};
int main()
{
    Child c1;
    return 0;
}
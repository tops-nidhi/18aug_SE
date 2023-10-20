// WAP to print the messages using single level inheritance
#include<iostream>
using namespace std;
class Base {
public:
    void display()
    {
        cout<< "This Base class.";
    }
};
class Derived : public Base{    
    public:
    void show()
    {
        cout<<"\nThis is derived class.";
    }
};
int main()
{
    Derived d1;
    d1.display();
    d1.show();
}
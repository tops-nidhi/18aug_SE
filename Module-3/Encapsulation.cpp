#include<iostream>
using namespace std;
class Capsul{

    int id;
    string nm;
public:
    Capsul()    //default constructor
    {
        cout<<"Enter your id: ";
        cin>>id;
        cout<<"\nEnter your name: ";
        cin>> nm;
    }

    void display()
    {
        cout<<nm<<" your id is "<< id;
    }
};
int main()
{
    Capsul cap;
    cap.display();
    return 0;
}
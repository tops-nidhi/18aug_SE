#include<iostream>
using namespace std;
class Abstract
{
    int no;
public: 

    Abstract()    //default constructor
    {
        cout<< "Enter your no: ";
        cin>> no;
        cout<< endl<< "Value of the no is: "<< no;
    }
};
int main()
{
    Abstract obj1; //creating two objects of class abstract
    return 0;
}
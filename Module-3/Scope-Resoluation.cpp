#include<iostream>
using namespace std;
int no = 76; // Global variable
int main()
{
    int no = 100; //Local variable
    cout<<endl <<"Value of global variable is: " <<::no;
    cout<<endl <<"Value of local variable is: " <<no;
}
#include<iostream>
using namespace std;
class Overloading{
public:
    void fun(int a){cout<<"Integer passed : "<<a<<endl;}
    void fun(int a, int b){cout<<"Float passed : "<<a + b<<endl;}
};
int main(){
    Overloading obj;
    obj.fun(56);
    obj.fun(56, 5);
    return 0;
}
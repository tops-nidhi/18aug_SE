#include<iostream>
using namespace std;
class A{
public:
    int add(int x, int y){
        return x+y;
    }
};
class B{
public:
    int add(int x, int y){
        return x+y;
    }
};
int main(){
    A a;
    B b;
    cout<< endl<< a.add(5,7);
    cout<< endl<< b.add(6,2);
}
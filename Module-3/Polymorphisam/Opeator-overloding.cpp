#include<iostream>
using namespace std;
class Operate {
public:
    int n;
    void get(){
        cout<<"Enter the value of n: ";
        cin>>n;
    }
    Operate operator +(Operate &op2){
        Operate op3;
        op3.n = n + op2.n;
        return op3;
    }
    void display(){
        cout<<"Value of the n is: "<< n<<endl;
    }
};
int main() {
    Operate obj1, obj2, obj3;
    obj1.get();
    obj1.display();
    obj2.get();
    obj2.display();
    obj3 = obj1 + obj2; //prefix increment
    obj3.display();
    return 0;
}
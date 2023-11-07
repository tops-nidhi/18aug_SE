#include<iostream>
using namespace std;
class Friend{
    int no;
public:
    friend int data(Friend &obj);
};
int data(Friend &obj){
    cout<<"Enter the number : ";
    cin>>obj.no;
    return obj.no;
}
int main() {
    Friend frnd;
    cout << data(frnd) << endl;
    return 0;
}
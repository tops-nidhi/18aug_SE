#include<iostream>
using namespace std;
class Construct{
public:
    int z;
    Construct()
    { 
        z = 10;
        cout<<"Constructor Called\n" << z;
    }
    Construct(Construct &obj){
        cout<<"\nAnother constructor called\n" << obj.z;
    }

};
int main()
{
    Construct con1;
    Construct con2 = con1;
    return 0;
}
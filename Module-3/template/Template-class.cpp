#include<iostream>
using namespace std;
template <typename Y>
class Template{
public: 
    inline Y data(Y x, Y y){return x/y;};
};
int main(){
    Template <int> temp1;
    cout<< endl<< temp1.data(56, 5);
    Template <float> temp2;
    cout<< endl<< temp2.data(56, 5);
    return 0;
}
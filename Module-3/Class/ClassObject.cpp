// WAP to get the value of the students
#include<iostream>
using namespace std;
class Student{

public: 
    int id;
    void insert(){
    cout<<"\nEnter your id: ";
    cin>>id;
    cout<<"Your id is: "<< id;
    }
};
int main()
{
    Student st;
    st.insert();
}
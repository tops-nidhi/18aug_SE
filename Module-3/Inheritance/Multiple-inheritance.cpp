// WAP to get the three students data using multiple inheritance
#include<iostream>
using namespace std;
class A
{
public:
    int aid;
    string aname;
    
    void aGetData()
    {
        cout<<"\n-------------------------A------------------------\n";
        cout<<"Enter the your id: ";
        cin>>aid;
        cout<<"Enter your name: ";
        cin>>aname;
    }
};
class B
{
public:
    int bid;
    string bname;
    void bGetData()
    {
        cout<<"\n-------------------------B------------------------\n";
        cout<<"Enter the your id: ";
        cin>>bid;
        cout<<"Enter your name: ";
        cin>>bname;
    }
};
class C
{
public:
    int cid;
    string cname;
    void cGetData()
    {
        cout<<"\n-------------------------C------------------------\n";
        cout<<"Enter the your id: ";
        cin>>cid;
        cout<<"Enter your name: ";
        cin>>cname;
    }
};
class D : public A,public B,public C{
public:
    void display(){
    cout<<"\n-------------------------"<<aname<<"------------------------\n";
    cout<<endl<<"Your id is: "<<aid;
    cout<<"\n-------------------------"<<bname<<"------------------------\n";
    cout<<endl<<"Your id is: "<<bid;
    cout<<"\n-------------------------"<<cname<<"------------------------\n";
    cout<<endl<<"Your id is: "<<cid;}
    
};
int main()
{
    D d1;
    d1.aGetData();
    d1.bGetData();
    d1.cGetData();
    d1.display();
    return 0;
}
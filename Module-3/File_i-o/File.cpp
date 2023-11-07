#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    string s = "Hello World!";
    string str;
    out.open("hello.txt");
    if(!out){
        cout<<"Unable to open file";
    }
    else{
        out<<s;
    }
    out.close();
    ifstream in("hello.txt");
    // in>>str;
    while(getline(in,str)){   
        cout<<str<<endl;
    }
    return 0;
}
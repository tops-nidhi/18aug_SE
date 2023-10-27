#include <iostream>
using namespace std;
class A
{
public:
    inline int add(int a, int b) { return a + b; }
};
class B : virtual public A
{
public:
    inline int sub(int a, int b) { return a - b; }
};
class C : virtual public A
{
public:
    inline int mul(int a, int b) { return a * b; };
};
class D : public B, public C
{
public:
    inline int div(int a, int b) { return a / b; };
};
int main()
{
    D d1; // define object
    cout << endl
         << d1.add(50, 20);
    cout << endl
         << d1.sub(50, 20);
    cout << endl
         << d1.mul(50, 20);
    cout << endl
         << d1.div(50, 20);

    return 0;
}
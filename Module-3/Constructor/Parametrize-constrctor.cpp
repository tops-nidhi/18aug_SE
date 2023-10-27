#include <iostream>
using namespace std;
class Construct
{
public:
    Construct(int a, int b)  //parametrize constructor
    {
        cout << endl
             << "Addition of the a and b is: " << a + b;
    }
};
int main()
{
    int x = 10, y = 20;
    Construct c(x, y); // calling constructor
    return 0;
}
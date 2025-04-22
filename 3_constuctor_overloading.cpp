#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    A()//constructor is a function and must be declared as public
    {
        cout << "Default constructor\n";
    }
    A(int x)
    {
        cout << "Overloaded constructor\n";
    }
};
int main()
{
    A ob;//would not be possible if we don't declare first constructor
    A obj(10);//if we parameterize a constructor we must declare a constructor which doesn't take parameter otherwise we can't declare an object without parameter
    return 0;
}

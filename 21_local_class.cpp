#include<bits/stdc++.h>
using namespace std;
void f()
{
    class A// this class only know this function and even unknown to main function
    {
        int x;
    public:
        A()
        {
            cout << "Local function\n";
        }
        void str(int x)
        {
            this->x=x;
        }
        int gtr()
        {
            return x;
        }

    }obj;
    obj.str(10);
    cout << obj.gtr() << endl;
}
int main()
{
    f();
    return 0;
}

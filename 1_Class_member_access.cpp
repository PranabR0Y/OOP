#include<iostream>
using namespace std;
class A{
    private:
        int x;
    public:
    A(int x):x(x){cout << "Constructor\n";}

    int change(int i)
    {
        int old=x;
        x=i;
        return old;
    }

};
int main()
{
    A var{10};
    cout << var.change(20) << endl;
    return 0;
}
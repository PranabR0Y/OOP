#include<bits/stdc++.h>
using namespace std;
void func(int x)
{
    cout << x << endl;
}
void func(double d)
{
    cout << d << endl;
}
int main()
{
    void(*ptr)(int);
    ptr=func;
    ptr(10);
    cout << ptr << endl;
    return 0;
}

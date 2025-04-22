#include<bits/stdc++.h>
using namespace std;
class A
{
    string name;
    int age;
public:
    A(string n,int a):name(n),age(a)
    {
        cout << name << endl << age << endl;
    }
};
int main()
{
    A obj("ABC",20);

    return 0;
}

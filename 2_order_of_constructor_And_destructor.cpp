#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base constructor\n";
    }
    ~base()
    {
        cout << "Base destructor\n";
    }
};
class derived1:public base
{
public:
    derived1()
    {
        cout << "Derived1 constructor\n";
    }
    ~derived1()
    {
        cout << "Derived1 destructor\n";
    }
};
class derived2:public derived1
{
public:
    derived2()
    {
        cout << "Derived2 constructor\n";
    }
    ~derived2()
    {
        cout << "Derived destructor\n";
    }
};
class derived3:public derived2
{
public:
    derived3()
    {
        cout << "derived3 constructor\n";
    }
    ~derived3()
    {
        cout << "Derived3 destructor\n";
    }

};
int main()
{
    //derived2 obj;
    derived3 ob;
    return 0;
}

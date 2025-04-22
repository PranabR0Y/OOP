#include<iostream>
using namespace std;
class base
{
public:
    virtual void func()
    {
        cout << "Base class function\n";
    }
};
class derived1:public base
{
public:
    void func()
    {
        cout << "derived1 function\n";
    }
};
class derived2:public base
{
public:
    void func()
    {
        cout << "derived2 function\n";
    }
};
int main()
{
    base *ptr,obj;
    derived1 ob1;
    derived2 ob2;
    ptr=&obj;
    ptr->func();
    ptr=&ob1;
    (*ptr).func();//another method
    ptr=&ob2;
    ptr->func();







    return 0;
}

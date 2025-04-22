#include<bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int x;
public:
    base1(int x)
    {
        this->x=x;
        cout << "base1 constructor\n";
    }
    ~base1()
    {
        cout << "base1 destructor\n";
    }
};
class base2
{
protected:
    int y;
public:
    base2(int i)
    {
        y=i;
        cout << "Base2 constructor\n";
    }
    ~base2()
    {
        cout << "Base2 destructor\n";
    }
};
class derived:public base1,public base2
{
    int z;
public:
    derived(int x,int y,int z):base1(y),base2(z)
    {
        z=x;
        cout << "derived constructor\n";

    }
    ~derived()
    {
        cout << "Derived destructor\n";
    }
    void show()
    {
        cout << x << endl << y << endl << z << endl;
    }
};
int main()
{
    derived obj(10,20,30);
    obj.show();
    return 0;
}

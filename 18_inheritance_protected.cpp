#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int x;
public:
    void set_base(int x)
    {
        this->x=x;

    }
    void show_base()
    {
        cout << "base " << x << endl;
    }

};
class derived1:public base
{
    int i;
public:
    void set_der1()
    {
        i=x*x;//can directly access base
    }
    int show_der1()
    {
        cout << "Derived1 " << i << endl;
        return this->x;
    }
};
class derived2 : public derived1
{
    int z;
public:
    void set_der2()
    {
        z=x+10;//can directly access x

    }
    void show_der2()
    {
        cout << "Derived2 " << z << endl;
    }
};
class derived3 : private base
{
    int d3=0;
public:
    void set_derived3(derived1& ob)
    {
        
        d3=ob.show_der1()+10;
    }
    void show_derived3()
    {
        cout << "derived3 " << d3 << endl;
    }
};
int main()
{
    base obj;
    obj.set_base(100);
    obj.show_base();


    derived1 ob;
    ob.set_base(1000);
    ob.show_base();
    ob.set_der1();
    cout << ob.show_der1() << endl;


    derived2 ob3;
    ob3.set_base(200);
    ob3.show_base();
    ob3.set_der2();
    ob3.show_der2();


    derived3 op;
    op.set_derived3(ob);
    op.show_derived3();
    //op.set_base(10); // set_base is private in derived3




    return 0;
}

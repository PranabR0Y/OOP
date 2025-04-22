#include<bits/stdc++.h>
using namespace std;
class A
{
    int i;
public:
    A(int x)
    {
        i=x;
        cout << "Constructing " << i << endl;
    }
    ~A()
    {
        cout << "Destruting " << i << endl;
    }
    void str(int i)
    {
        this->i=i;
    }
    void gtr()
    {
        cout << i << endl;
    }
};
void f(A obj)
{
    obj.str(10);
    cout << "This is local\n";
    obj.gtr();

}
int main()
{

    A ob(20);
    f(ob);
    cout << "this is main ";
    ob.gtr();
    return 0;
}

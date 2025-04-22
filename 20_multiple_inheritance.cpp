#include<bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int i;
public:
    void show_base1()
    {
        cout << "Base " << i << endl;
    }
};
class base2
{
protected:
    int j;
public:
    void show_base2()
    {
        cout << "base2 " << j << endl;
    }
};
class derived:public base1,public base2
{
public:
    void str(int x,int y)
    {
        i=x;
        j=y;
    }
};
int main()
{
    derived ob;
    ob.str(100,200);
    ob.show_base1();
    ob.show_base2();
    return 0;
}

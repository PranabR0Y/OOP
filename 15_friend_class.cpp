#include<bits/stdc++.h>
using namespace std;
class A
{
    int i,j;
public:
    void str(int x,int y)
    {
        i=x;
        j=y;
    }
    friend class B;//  Friendship is not mutual. If class A is a friend of B, then B doesn’t
                   //become a friend of A automatically.
};
class B
{
public:
    void add(A obj)
    {
        cout << obj.i+obj.j << endl;
    }
};
int main()
{
    A obj;
    obj.str(10,20);
    B ob;
    ob.add(obj);
    return 0;
}

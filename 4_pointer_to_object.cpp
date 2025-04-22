#include<bits/stdc++.h>
using namespace std;
class A
{
    int i,j;
public:
    A(int x,int y)
    {
        i=x;
        j=y;
    }
    int get_i()
    {
        return i;
    }
    int get_j()
    {
        return j;
    }
};
int main()
{
    A ob(10,20);
    A *ptr;
    ptr=&ob;
    cout << ptr->get_i() << endl;
    cout << (*ptr).get_j() << endl;
    return 0;
}

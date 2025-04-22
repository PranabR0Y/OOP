#include<bits/stdc++.h>
using namespace std;
class A
{
    int i,j;
public:
    void str(int,int);
    friend void sum(A obj);
};
void A::str(int i,int j)
{
    this->i=i;
    this->j=j;
}
void sum(A obj)
{
    cout << obj.i+obj.j;
}
int main()
{
    A obj;
    obj.str(10,20);
    sum(obj);

    return 0;
}

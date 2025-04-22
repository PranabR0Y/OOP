#include<bits/stdc++.h>
using namespace std;
class A
{
    int x,y;
public:
    void str(int i,int j)
    {
        x=i;
        y=j;

    }
    void gtr()
    {
        cout << x << " " << y << endl;
    }
    friend A operator+(A& o1,A& o2);//friend function don't have this pointer thats why operands need to be passed explicitly
    friend A operator++(A &op);//prefix version
    friend A operator++(A &op,int i);
    friend A operator+(A ob,int x);
    friend A operator+(int x,A ob);
};
A operator+(A& o1,A& o2)
{
    A obj;
    obj.x=o1.x+o2.x;
    obj.y=o1.y+o2.y;
    return obj;
}
A operator++(A &op)
{
    op.x++;
    op.y++;
    return op;
}
A operator++(A &op,int x)
{
    op.x++;
    op.y++;
    return op;
}
A operator+(A ob,int x)
{
    ob.x+=x;
    ob.y+=x;
    return ob;
}
A operator+(int x,A ob)
{
    ob.x+=x;
    ob.y+=x;
    return ob;
}
int main()
{
    A o1,o2,o3;
    o1.str(10,20);
    o2.str(30,40);
    o1.gtr();
    o2.gtr();
    o3=o1+o2;
    o3.gtr();
    ++o3;
    o3.gtr();
    o3++;
    o3.gtr();
    o3=o3+100;
    o3.gtr();
    (100+o3).gtr();//only add don't update values of o3;
    return 0;
}

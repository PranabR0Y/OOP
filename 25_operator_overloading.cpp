#include<bits/stdc++.h>
using namespace std;
class A
{
    int x,y;
public:
    void str(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void gtr()
    {
        cout << x << " " << y << endl;
    }
    A operator+(A ob);
    A operator-(const A& ob);// Pass by reference to avoid copying
    A operator++();
    A operator++(int x);


};
A A::operator+(A ob)
{
    A obj;
    obj.x=x+ob.x; //x refers to o1.x (the calling object’s x).
    obj.y=y+ob.y;
    return obj;
}
A A:: operator-(const A& ob)// Your previous function currently copies ob, which is inefficient. Instead, pass by reference:
{
    int x,y;
    x=this->x-ob.x;
    y=this->y-ob.y;
    A obj;
    obj.str(x,y);
    return obj;
}
A A::operator++()//prefix
{
    x++;
    y++;
    return *this;
}
A A::operator++(int x)//postfix
{
    this->x++;
    y++;

    return *this;

}
int main()
{
    A o1,o2,o3;
    o1.str(1,2);
    o2.str(3,4);
    o1.gtr();
    o2.gtr();
    o3=o1+o2;
   /*  letf side operand generate function call; o1.operator+(o2);
    o1 is calling the function (so this points to o1)
    o2 is passed as the argument (ob). */
    o3.gtr();
    (o1-o2).gtr();//only minus don't update any value;
    ++o1;//prefix
    o1.gtr();
    o2=++o1;
    o1.gtr();
    o2.gtr();
    o1++;//postfix
    o1.gtr();


    return 0;
}

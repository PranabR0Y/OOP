#include<bits/stdc++.h>
using namespace std;
class A
{
    static int i;
    int j;
public:
    void str(int x,int y)
    {
        i=x;
        j=y;
    }
   void gtr()
   {
       cout << "Static: " << i << " Normal:" << j << endl;
   }
};
int A::i;
class B
{
    static int i;
public:

    static void str(int x)//only directly refer to static member
    {
        i=x;

    }
    void gtr()
    {

        cout << i << endl;
    }
};
int B::i;
class car{
    static int i;
    int  j;
    public:
    static void showinfo()
    {
        cout << "This is static fuction\n";
        cout << i <<  endl;
        // can't access j nostatic
    } 
};
int car::i=100;// only static memebers can be defined outside the class

int main()
{
    A obj,ob2;
    obj.str(10,20);
    obj.gtr();
    ob2.str(20,30);// now update static as 20
    ob2.gtr();
    obj.gtr();//now obj has same value of a from ob2
    B::str(1000);
    B ob;
    ob.gtr();
    return 0;
}

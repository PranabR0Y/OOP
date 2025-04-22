// Compile-time (Static) Polymorphism Achieved using Function Overloading and Operator Overloading 

#include<iostream>
using namespace std;
class Math {
    public:
        void add(int a, int b) { cout << "Sum (int): " << a + b << endl; }
        void add(double a, double b) { cout << "Sum (double): " << a + b << endl; }
};
class A{
    int a,b;
    public:
    A(){}
    A(int x,int y){
        a=x;
        b=y;
    }
    void show()
    {
        cout << this->a << " " << this->b << endl;
    }
    A operator+(A& ob){
        A obj;
        obj.a=a+ob.a;
        obj.b=b+ob.b;
        return obj;
    }

};
    
int main()
{
    Math m;
    m.add(10, 20);
    m.add(10.5, 2.9);
    A o1(10,20),o2(30,40);
    o2=o1+o2;
    o2.show();

    
    return 0;
}
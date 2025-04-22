#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
          int a=10;
    private:
          int b=20;
    protected:
          int c=30;

};
class child1:public Parent{//public inheritance
    public:
        void show()
        {
            cout << "a: " << a << endl;//Allowed (public stays public) ✅ a is also accessible in main().
            cout << "c: " << c << endl;//Allowed (protected stays protected) ✅ c is accessible inside the child class.
            //cout << "b: " << b << endl; //❌ ERROR (private not inherited) 
        }

};
class Child2 : protected Parent { // Protected Inheritance
    public:
        void show() {
            cout << "a: " << a << endl;  // ✅ Allowed (public -> protected)
            cout << "c: " << c << endl;  // ✅ Allowed (protected stays protected)
        }
    //✅ a and c are accessible inside the child2.
    //❌ a Not accessible in main() (because public members become protected).
    
};
    
class Child3 : private Parent { // Private Inheritance
    public:
        void show() {
            cout << "a: " << a << endl;  // ✅ Allowed (public -> private)
            cout << "c: " << c << endl;  // ✅ Allowed (protected -> private)
        }
    };
    //✅ a and c are accessible inside Child3.
    //❌ Not accessible outside (main()). (because public members become private).
    
class GrandChild: public Child3{

    public:
    void show() {
         //cout << "a: " << a << endl; ❌ ERROR (a is private in ChildPrivate)
        // cout << "b: " << b << endl; ❌ ERROR (b is private in ChildPrivate)
    }
    //a and b are private in Child3, so GrandChild cannot access them.

};
class GrandChildProtected : public Child2 {
    public:
        void display() {
            cout << "a: " << a << endl;  // ✅ Allowed (protected is accessible)
            cout << "c: " << c << endl;  // ✅ Allowed (protected is accessible)
        }
};
int main()
{
    child1 ob1;
    cout << ob1.a << endl;
    ob1.show();
    Child2 ob2;
    ob2.show();
    return 0;
}
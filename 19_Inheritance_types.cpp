#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public:
    void sound()
    {
        cout << "Animal Sound" << endl;
    }
};
class Dog : public Animal// Single Inheritance.
{
    public:
    void sound()//sound() function in Dog hides the one in Animal (function hiding).
    {
        
        cout << "Dog Sound" << endl;
    }
};
class A {
    public:
        void show() {
            cout << "Class A" << endl;
        }
    };
    
    class B {
    public:
        void show() {
            cout << "Class B" << endl;
        }
    };
class C : public A, public B// Multiple Inheritance.
{
    public:
    void showC()
    {
        A::show();
        B::show();// :: used to resolve ambiguity.
        cout << "Class C" << endl;
    }
};
// Multilevel Inheritance.
class GrandParent
{
    public:
    GrandParent()
    {
        cout << "GrandParent" << endl;
    }
};   
class Parent : public GrandParent
{
    public:
    Parent()
    {
        cout << "Parent" << endl;
    }
};
class Child : public Parent
{
    public:
    Child()
    {
        cout << "Child" << endl;
    }
};
// Hierarchical Inheritance.
class cat : public Animal
{
    public:
    void sound()
    {
        cout << "Cat Sound" << endl;
    }
};
class Lion : public Animal
{
    public:
    void sound()
    {
        cout << "Lion Sound" << endl;
    }
};
int main()
{
    Dog d;
    d.sound();
    d.Animal::sound();

    C c;
    c.showC();

    Child ch;
    return 0;
}
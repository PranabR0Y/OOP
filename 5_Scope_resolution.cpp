
//used to define or access members of a class, namespace, or global scope when there is ambiguity or when accessing something outside the current scope.
#include<iostream>
using namespace std;
int a=10;
//Defining Class Member Functions Outside the Class
class A
{
    public:
    void show() const;

};
void A::show() const
{
    cout << "Hello World\n";
}
//Accessing Static Members of a Class
class Test {
    public:
        static int count;
    };
    
    int Test::count = 10;  // Define static member outside the class


//Resolving Global and Local Variable Name Conflicts
class C{
    int a=100;
    public:
    void show(){
        cout << a << endl;
        cout << ::a << endl;
    }

};

class Car {
    private:
        int m_year;
    public:
        int getYear() const { return m_year; }  //means that this function does not modify any member variables of the class
        void setYear(int year) { m_year = year; }  //  Not const (modifies data)
    };
int main()
{
    A ob;
    ob.show();
    cout << Test::count << endl;
    C c;
    c.show();
    return 0;
}
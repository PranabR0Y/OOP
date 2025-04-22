#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setter(int a){
        this->a=a; // "this" differentiates member variable and parameter
    }
    void getter(){
        cout << this->a << endl;
    }
};
//Returning the Current Object (Method Chaining)
class B{
    int a;
    public:
    B& setter(int a){ //returns a reference (&) to the calling object.
        this->a=a;
        return *this;
    }// "this" is used to return the current object
    void getter(){
        cout << this->a << endl;
    }
};
// this not availble to static member function
int main()
{
    A ob1,ob2;
    ob1.setter(10);
    ob2.setter(20);
    ob1.getter();
    ob2.getter();

    B ob3;
    ob3.setter(100).getter();
    return 0;
}
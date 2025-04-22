#include<bits/stdc++.h>
using namespace std;
class BasicCar{
    public:
    void f1()
    {
        cout << "Base Class" << endl;
    }

};
class AdvancedCar:public BasicCar{
    public:
    void f2()
    {
        cout << "Derived Class" << endl;
    }

};
int main()
{
    BasicCar *ptr;
    ptr= new AdvancedCar();
    ptr->f1(); //using the basic class pointer we can call the base class function only
    //It is just like a basic car but there is an advanced car here with all the extra features in the car which you have no idea about.

    //ptr->f2(); //This will give an error because the pointer is of the base class and the base class does not have the function f2.

    AdvancedCar ptr1; 
    BasicCar *ptr2=&ptr1;
    ptr2->f1(); //using the basic class pointer we can call the base class function only

    //ptr2->f2(); //This will give an error because the pointer is of the base class and the base class does not have the function f2.


    AdvancedCar *p1;
    //p1=new BasicCar();It is not possible that we have a derived class pointer and I have assigned the object of the base class
    //many of the features of our advanced car are not available in the basic car
    p1->f2();
    p1->f1();

    

    return 0;
}
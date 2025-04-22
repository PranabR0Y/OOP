#include<iostream>
using namespace std;
class shape{
    public:
            virtual void area()=0;
            virtual void perimeter()=0;
            virtual void display()=0;
    
};
class Rectangle:public shape{
    int lenght;
    int breadth;
    public:
            Rectangle(){}

            Rectangle(int l=0,int b=0){
                lenght=l;
                breadth=b;
            }
            void area(){
                cout << "Area of rectangle is "<< lenght*breadth << endl;
            }
            void perimeter()
            {

                cout << "Perimeter of rectangle is " << 2*(lenght+breadth) << endl;
            }
            void perimeter(int l,int b){// pure virtual function can be overloaded

                cout << "length is " << l << endl;
                cout << "breadth is " << b << endl;
            }
            void display() override{// override keyword is used to check if the function is virtual or not
                cout << "This is a rectangle" << endl;
            }

};
class Circle:public shape{// doesn't implement pure virtual so it is also an abstract class
    int radius;
    public:
    Circle(int l=0){
        radius=l;
    }
};
int main()
{
    shape *s;// pointer of abstract class can be created but object cannot be created
    Rectangle r(10,5);
    r.area();
    r.display();
    r.perimeter();
    r.perimeter(20,10);
    s= new Rectangle(10,5);
    s->area();
    s->perimeter();
   
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    ~Rectangle(){
        cout<<"Destructor called"<<endl;
    }

};

class Cube:public Rectangle{
    int height;
    public:
    Cube(){
        height=0;
    }
    Cube(int height){
        this->height=height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;// getLength() and getBreadth() are public in Rectangle class
    }
    
};
int main()
{
    Cube c;
    c.setHeight(10);
    c.setLength(5);// Accessing public member of Rectangle class
    c.setBreadth(4);// Accessing public member of Rectangle class
    cout << "Volume of cube is " << c.volume() << endl;
    return 0;
}
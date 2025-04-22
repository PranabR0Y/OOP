#include<iostream>
using namespace std;

template<class T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
template<typename T>//T is a placeholder for a data type
T Max(T a, T b)//When the function is called, T is replaced by the actual type based on the arguments provided.
{
    return a>b?a:b;//The return type will be the same type as the arguments.
}

// Multiple Template Parameters

template<typename T1, typename T2>
void Add(T1 a,T2 b)
{
    cout << a+b << endl;
}
int main() {
    int a = 10, b = 20;


    double c = 10.5, d = 20.5;
    Swap(c, d);

    char e = 'A', f = 'B';
    

    cout << "Before swapping" << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << " f = " << f << endl;
    Swap(a, b);
    Swap(c, d);
    Swap(e, f);

    cout << "After Swapping " << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << " f = " << f << endl;

    cout << "Checking Max\n" ;
    cout << Max(1,2) << endl;// T = int → returns int
    cout << Max('a','c') << endl;//// T = char → returns char


    Add(10,11);
    Add('A',1);//char + int ('A' = 65, so output = 66)
    
    


    return 0;
}
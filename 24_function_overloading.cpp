#include<bits/stdc++.h>
using namespace std;
/*void func(int i)
{
    cout << i << endl;
}*/
void func(double d)
{
    cout << "Double version " <<  d << endl;
}
void func(float f)
{
    cout << "Floating version " << f << endl;
}
int main()
{
    func(10.2);
    func((float)10.8);
    return 0;
}

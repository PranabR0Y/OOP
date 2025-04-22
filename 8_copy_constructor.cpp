#include<bits/stdc++.h>
using namespace std;
class A
{
      int i,j;
      public:
      A(int a,int b)
      {
            i=a;
            j=b;
            cout << "Constructor\n";
            
      }
      A(const A& obj)
      {
            i=obj.i;
            j=obj.j;
      }
      void show();
};
void A::show()
{
      cout << i << endl << j << endl;
}
int main()
{
      A obj(10,20);
      A b=obj;
      b.show(); 
      return 0;
}
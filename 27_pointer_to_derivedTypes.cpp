#include<bits/stdc++.h>
using namespace std;
class base
{
      int x;
      public:
      void setter(int i)
      {
            x=i;
      }
      int getter()
      {
            return x;
      }

};
class derived:public base
{
      int j;
      public:
      void str()
      {
            j=0;
      }
      void gtr()
      {
            cout << j << endl;
      }

};
int main()
{
      base *ptr;
      base obj;
      derived ob2;
      ptr=&ob2;
      ptr->setter(10);
      ob2.setter(20);
      ((derived*)ptr)->str();
      ((derived*)ptr)->gtr();
      cout << ptr->getter() << endl;

      return 0;
}

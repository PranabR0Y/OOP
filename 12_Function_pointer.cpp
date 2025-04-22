#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
       return a+b;
}
int Minus(int a,int b)
{
       return a-b;
}
int multiply(int a,int b)
{
       return a*b;
}
void PrintValue(int value)
{
       cout << value << endl;
}
void Foreach(const vector<int>&v,void(*func_ptr)(int))
{
       for(int i:v)
       func_ptr(i);

}
int main()
{
       int(*ptr)(int,int);// ptr a function pointer
       ptr=sum;
       cout << ptr(2,3) << endl;

       auto ptr2=sum;// ptr2 also a function pointer by auto keyword
       cout << ptr2(2,3) << endl;
       
       vector<int>v{1,2,3,4,5,6};

       Foreach(v,PrintValue);

       int(*ptr_array[3])(int,int);//array of function pointer
       ptr_array[0]=sum;
       ptr_array[1]=multiply;
       ptr_array[2]=Minus;

       cout <<  ptr_array[0](2,3) << endl;
       cout << ptr_array[1](2,3) << endl;
       cout << ptr_array[2](2,3) << endl;
       

       return 0;
}
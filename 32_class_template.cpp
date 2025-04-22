#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
    T *stk;//stk is a pointer to an array of type T.
    int Top,size;
    public:
    Stack():stk(nullptr),Top(-1),size(0){};
    Stack(int sz){
        size=sz;
        Top=-1;
        stk = new T[size];//we allocate memory using new T[size], stk will point to a dynamically allocated array.

    }
    ~Stack(){
        cout << "Destructor Called\n";
    }
    void Push(T x);
    T Pop();
};
template<typename T>
void Stack<T>::Push(T x){
    if(Top==size-1){
        cout << "Stack Is Full\n";
    }
    else{
        
        stk[++Top]=x;
        cout << "Element " << x << " Added into Stack\n";

    }

}
template<typename T>
T Stack<T>::Pop()
{
    if(Top==-1){
        cout << "Stack Is Empty\n";
        return -1;
    }
    else{
        cout << "Element " << stk[Top] << " Removed\n";
        return stk[Top--];
    }
}
int main()
{
    Stack<int> obj(5);
    for(int i=0;i<6;i++)
    {
        obj.Push(i+1);
    }
    for(int i=0;i<6;i++)
    {
        obj.Pop();

    }

    Stack<char> obj2(5);
    char x='a';
    for(int i=0;i<6;i++)
    {
        obj2.Push(x++);
        
    }
    for(int i=0;i<6;i++)
    {
        obj2.Pop();

    }
    Stack<string>st(5);
    string s="AACds";
    for(int i=0;i<10;i++)
    {
        st.Push(s);


    }
    for(int i=0;i<10;i++)
    {
        st.Pop();
    }

    return 0;
}
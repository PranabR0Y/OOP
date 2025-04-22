#include <iostream>
using namespace std;

void check(int d) {
    try {
        if (d == 0) throw d;  // Throws an exception if d == 0
    }
    catch (int) {  // Catches the thrown exception
        cout << "Exception caught: Division by zero" << endl;
        throw;  // Rethrow to propagate it to division()
    }
}

double division(int a, int b) {
    try {
        check(b);  // Calls check() to validate b 
                    //the exception propagates back to division(), which was calling check(b); inside its try block.
        return a / b;  // This will not execute if b == 0
    } 
    catch (int) {  // Catches the rethrown exception
        cout << "Division operation failed!" << endl;
        return 0;  // Returns 0 as fallback
    }
}
void Xhandler(int test){
    try{
        if(test==0)throw test;
        if(test==1)throw 'a';
        if(test==2)throw 123.23;

    }
    catch(int i){//catch an integer exception
        cout << "Caught an integer exception\n";
    }
    catch(...){//catch all
        cout << "Default exception\n";
    }
}

int main() {
    cout << division(10, 2) << endl;  // Valid division
    cout << division(10, 0) << endl;  // Division by zero case
    Xhandler(0);
    Xhandler(1);
    
    return 0;
}

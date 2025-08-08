#include<iostream>
using namespace std;
void func( ){
    cout << "Hello World: \n";
}
int main(){
    void (*ptr) (); //function pointer 
    ptr = func;
    ptr();
    func();
    return 0;
}
#include<iostream>
using namespace std;
void func(int a, int b ){
int c = a + b;
cout << "Sum is : "<< c << endl; 
}
int main(){
    void (*ptr)(int , int);
    ptr = func;
    ptr(10, 20); 
    func(10,20);
    return 0; // calling function using pointer
}
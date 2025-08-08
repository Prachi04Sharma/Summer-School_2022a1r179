#include<iostream>
using namespace std;
int num = 10;
int main(){
    int num = 20;
    int *ptr = &num;
    int &x = num;
    cout << num << endl; //20
    cout << *ptr << endl; //20
    cout << **(&ptr) << endl; //20 reference 
    cout << *(&num) << endl; //20 dereference 

    cout << &num << endl; //address of num
    cout << ptr << endl; //address of num
    cout << &x << endl; //address of num
    cout << *(&ptr) << endl; //address of num
    return 0;
}
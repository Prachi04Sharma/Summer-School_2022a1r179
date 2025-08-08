#include<iostream>
using namespace std;
void func( int num){
    num = 10;
}
int main(){
    int num = 20;
    cout << "Before function call: " << num << endl; // 20
    func(num); // call by value 
    cout << "After function call: " << num << endl; // 20, because num is passed by value
    return 0;
}
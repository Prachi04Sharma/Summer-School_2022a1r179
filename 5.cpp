#include<iostream>
using namespace std;
int change(int &r){
    r = 7;
    return r;
}
int main(){
    int a = 5;
    cout<<"a : "<<a<<endl;
    change(a);
    cout<<"a : "<<a;
    return 0;
}
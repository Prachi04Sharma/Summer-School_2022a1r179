//Vector Sorting 
#include<iostream>
using namespace std;
int num = 10;
int main(){
    int num = 20; 
    int *ptr = &num; 
    int &x = num; 
    cout << num << endl; //20
    cout<<ptr << endl; //address of num
    cout<< ::num <<endl; // we need to use scoperesolution operator to print global value of num
    cout<<x<<endl; //20
    return 0;
}

#include<iostream>
using namespace std;
template <typename T, typename U>
auto sum(T a, U b){
    return a+b;
}
int main(){
    cout<<"Sum: "<< sum(10,10)<<endl;
    cout<<"Sum: "<<sum(10.5f, 10.5f)<<endl;
    cout<<"Sum: "<<sum(10.5f, 10)<<endl;
    cout<<"Sum: "<<sum(10, 10.5f)<<endl;

    return 0;
}
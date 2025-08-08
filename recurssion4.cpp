#include<iostream>
using namespace std;
void func(int num){
    if(num>=10)
    return;    //FORWARD TRACKING 
    cout << num << endl;
    func(num+1);
}
int main(){
    func(1);
    return 0; // o/P 1 to 9
}

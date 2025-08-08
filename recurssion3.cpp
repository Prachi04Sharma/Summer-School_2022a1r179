#include<iostream>
using namespace std;
void func(int num){
    if(num>10)
    return;
       func(num+1); //BACKTRACKING 
    cout << num << endl; // O/P : 10 TO 1
}
int main(){
    func(1);
    return 0;
}

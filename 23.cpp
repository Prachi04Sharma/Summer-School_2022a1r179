//Constructor
#include<iostream>
using namespace std;
class btech{
    public:
    int sweets;
    static int stv;   // static variable 
};
int btech:: stv = 2;  //global scope 
int main(){
    btech s1, s2;
    // s1.stv = 3;
    cout << s1.stv << endl;
    cout << s2.stv << endl;
    return 0;
}
#include<iostream>
using namespace std;
class btech{
    public :
    int nonStatic;
    static int staticVar; // static variable;
    btech(): nonStatic(10){}
    static void staticFun(void){
        cout << "I am static method: "<<endl;
        cout << "Static var: "<< staticVar << endl;     //2
    //    cout << "Non static var: "<< nonStatic <<endl;     // error 
    }
    void nonStaticFun(){
        cout << "I am static method: "<<endl;
        cout << "Static var: "<< staticVar << endl;     //2
        cout << "Non static var: "<< nonStatic <<endl;     //10 
    }
};
int btech::staticVar = 2; //global initialization is mandatory  
int main(){
    btech::staticFun();
}
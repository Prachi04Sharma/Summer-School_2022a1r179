//Class and Objects - 
/*Methods : Functions inside a class are known as methods.
Ways to declare methods in C++ : 
Ways to define functions : inside class , outside class methods.
The methods which are defined and maintained within the same class - inside class method
The methods which are declared inside the class but defined outside the class
with the help of scope resolution operator - outside class method.
*/
#include<iostream>
using namespace std;
class Data{
    public :
    void Greet(){
        cout << "Hello, bolo..";
    }
    void negGreet(void);
};
void Data :: negGreet(){
    cout << "Hello, mat bolo..";
}
int main(){
    Data acc;
    acc.Greet();
    cout<<endl;
    acc.negGreet();
    return 0;
}
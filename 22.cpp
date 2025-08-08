//Constructor : Constructor are the function define inside class and function name must be same as class name. 
/*- Constructor does not have any return type.
We cannot call Constructor a function, it was invoked when object of a class is created. 
Constructor can be override.
types of constructor : 
1) default constructor / non - parameterized constructor :
constructor did not have any parameter is called default constructor.
2) parameterized constructor :
constructor having parameter is called parameterized constructor.
3) copy constructor : 
a constructor that initialized an object using another object of the same class.
note :
for every constructor call, there must have constructor definition other wise it shows an error.
#Static data member :- 
Static data member: It define using static keyword.
                    When static is used with data member in a class, it makes the variable shared among all instances of
                    the class.
*/

#include<iostream>
using namespace std;
class party{
    public:
    int samosa;
    int methai;
    string drink;
    //initializer list
    party(): samosa(2), methai(3), drink("cold coffee"){}
    party(){
        samosa = 2;
        methai = 3;
        drink = "cold coffee";
    }
    void print(){
        cout << "samosa: "<< samosa << endl;
        cout << "sweets: "<< methai << endl;
        cout << "drink: "<< drink << endl;
    }
};
int main(){
    party p1;
    return 0;
}

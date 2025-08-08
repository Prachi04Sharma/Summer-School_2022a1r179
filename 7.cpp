//Constructor 
/*Constructor is a special type of method function which is automatically invoked or called
when an object of the class is created. 
Key point features for Constructors:
1) Constructor name == Class name (in C++)
2) Automatically invoked at the time of object creation.
3) For constructors memory will be allocated only once at the time of object creation.
4) Constructors don't have any return type.
5) Constructors should always be public.
6) W.r.t parametrized constructor we can pass the arguments at the time of object creation with
   the help of parenethesis.
7) Types of Constructors - Majorly there are three types of constructors :- 
   Default Constructors, Copy Constructors and Parametrized Constructors

- Default Constructor - automatically invoked or implicitly passed by the language processor,
  when we do not create any constructor or when it is not available.
- Parametrized Constructor - a constructor doesn't have any parameter
  then its a non parametrized constructor. 
- Copy Constructor  */
#include<iostream>
using namespace std;
class Data{
    public:
     Data(){
        cout << "Hello, Bolo..";
    }
};
int main(){
    Data acc;      //Default Constructor 
    return 0;
}

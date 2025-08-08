//Copy Constructor : Copy constructor is a special type of constructor in c++ which 
//creates a copy of the existing objects. 
/*Copy constructor types -
1) Default Copy Constructor
2) Custom Copy Constructor  */
#include<iostream>
using namespace std;
class Data{
    public: 
    string name;
    int age;
    // Regular Constructor
    Data(string name, int age){
        this-> name = name;
        this-> age = age;
        cout << "Regular Constructor called for " << name << endl;
    }    
    // Custom Copy Constructor
    Data(const Data& other){       //other here is the refObject 
        this->name = other.name;
        this->age = other.age;
        cout << "Custom Copy Constructor called for " << name << endl;
    }    
    void printDetails(void){
        cout << "Name : "<<name<<endl;
        cout << "Age : "<<age<<endl;
    }
};
int main(){
    Data M1("Mitali", 2000);
    M1.printDetails();
    Data M2(M1);
    M2.printDetails();
    return 0;
}
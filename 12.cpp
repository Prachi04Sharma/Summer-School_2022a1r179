//Custom Copy Constructor - 
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
    Data(const Data& other){
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
    cout << "Creating original object M1:" << endl;
    Data M1("Mitali", 2000);
    M1.printDetails();
    
    cout << "\nCreating copy M2 using custom copy constructor:" << endl;
    Data M2(M1);  // Custom copy constructor called
    M2.printDetails();
    
    cout << "\nCreating another copy M3:" << endl;
    Data M3 = M1;  // Another way to call copy constructor
    M3.printDetails();
    
    return 0;
}

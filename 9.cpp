//Parameterized Constructor
#include<iostream>
using namespace std;
class Data{
    public:
    int age;
    string name;
    Data(){
        cout << "Hello, Bolo.."<<endl;
    }
    Data(int age, string name){
        this -> age = age;
        this -> name = name;
    }
    void Print(void);
};
void Data::Print(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

int main(){
    Data acc;
    //acc.Print();
    Data ac(20, "Vansh");
    ac.Print();
    return 0;
}
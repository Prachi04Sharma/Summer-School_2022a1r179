#include<iostream>
using namespace std;
class Data{
    public:
    int age;
    string name;
    Data(){
        cout<<"Hello, Bolo..";
    }      //in class constructor
        Data(int a, string n = "Poor People"){
            age = a;
    }
    void Print(void);
};
void Data::Print(){
    cout << "Name : "<<name<<endl;
    cout << "Age : "<<age<<endl;
}
int main(){
    Data acc;  ///Default Constructor || Non Para Constructor 
    Data ac(20);
    acc.Print();
    ac.Print();
    return 0;
}
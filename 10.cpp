//Data Encapsulation : Wrapping up of data and member function in a single unit is data
//encapsulation.
#include<iostream>
using namespace std;
class Data{
    private:
    int age;
    string name;
    public:
    void getData(void){
        cout<<"name : ";  cin>>name;
        cout<<"age : "; cin>>age;
    }
    void Print(void);
};
void Data::Print(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}
int main(){
    Data acc;
    acc.getData();
    acc.Print();
    return 0;
}
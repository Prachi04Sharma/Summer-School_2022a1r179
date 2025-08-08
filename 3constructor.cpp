//WAP to take name, roll and cgpa of two student and print it.
//note: take data using getdata() function and print it using putdata() function.
#include<iostream>

using namespace std;
class btech{
    private:
    int roll ;
    float cgpa;
    string name;
public: 
void getdata(){
    cout << "Enter name: "<<endl;
    cin >> name;
    cout << "Enter rollnumber: "<<endl;
    cin >> roll;
    cout << "Enter CGPA: "<<endl;
    cin >> cgpa;
}
void putdata(){
    cout << "Name: "<<name <<endl;
    cout << "Rollnumber: "<<roll<<endl;
    cout<< "CGPA: "<<cgpa << endl;
}
};
int main(){
    btech s1, s2;
    cout << "Enter details for first student: "<<endl;
    s1.getdata();
    cout << "Enter details for second first: "<<endl;
    s2.getdata();
    cout << "Details of first student: "<< endl;
    s1.putdata();
    cout << "Details of second student: "<< endl;
    s2.putdata();
    return 0;
}
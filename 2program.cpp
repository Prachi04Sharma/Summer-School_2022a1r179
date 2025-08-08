//WAP to print student detail roll and cgpa, note: initialize roll and cgpa using constructor and print this detail via display function
//roll and cgpa must be data member of btech class.
#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    float cgpa;

public:
Student(int r, float c){
    roll = r;
    cgpa = c;
}


void display(){
    cout << "Your roll number is: "<<roll<< endl;
    cout << "Your cgpa: " << cgpa<< endl;

}
};
int main(){
    Student vansh(95, 9.1);
    vansh.display();
    return 0;
}
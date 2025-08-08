/*Asymptotic Notation : 
The complexity of an algorithm quantifies the amount of time taken by a program 
to run as a function of length of the input.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a = 0,i=n;
    while(i>= 1){
        a = a+1;
        i /= 2;
    }
    return 0;

}
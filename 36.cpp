#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Hello! How are you?";
    stack <char> s;
    for(int i = 0; i<str.length();i++){
        if(str[i] != ' ')
        s.push(str [i]);
        else{
            while( !s.empty() ){
                cout << s.top();
                s.pop();
            }
            cout<< " ";
        }
    }
    while( !s.empty()){
        
    }
}
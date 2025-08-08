//Stack 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Hello! How are you?";
    stack <string> s;
    string word="";
    for(int i = 0; i<str.length();i++){
        if(str[i] != ' ')
        word += str[i];
        else{
            s.push(word);
            word = "";
        }
    }
    s.push(word);
    while( !s.empty()){
        cout << s.top()<<" ";
        s.pop();
    }
}
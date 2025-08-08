//Stack Data Structure 
/*Problem 1: Sample input: Hello! How are you?
             Sample output: ?uoy era woH !olleH*/
             
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to reverse a string using stack
string reverseString(const string& input) {
    stack<char> charStack;
    string reversed = "";    
    for (char c : input) {
        charStack.push(c);
    }
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }
    
    return reversed;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);  
    string output = reverseString(input);
    
    cout << "Original string: " << input << endl;
    cout << "Reversed string: " << output << endl;
    
    return 0;
}
//WAP to replace pi with 3.14
#include<iostream>
#include<string>
using namespace std;

// Method 1: Using string replace function (built-in)
void replaceUsingBuiltIn(string& str) {
    string target = "pi";
    string replacement = "3.14";
    size_t pos = 0;
    
    while((pos = str.find(target, pos)) != string::npos) {
        str.replace(pos, target.length(), replacement);
        pos += replacement.length(); // Move past the replacement
    }
}

// Method 2: Manual replacement without using replace function
string replaceManually(string str) {
    string result = "";
    string target = "pi";
    string replacement = "3.14";
    
    for(int i = 0; i < str.length(); i++) {
        // Check if current position starts with "pi"
        if(i <= str.length() - target.length() && 
           str.substr(i, target.length()) == target) {
            result += replacement;
            i += target.length() - 1; // Skip the "pi" characters
        } else {
            result += str[i];
        }
    }
    return result;
}

// Method 3: Recursive approach
string replaceRecursively(string str, int index = 0) {
    // Base case: reached end of string
    if(index >= str.length()) {
        return str;
    }
    
    // Check if "pi" found at current position
    if(index <= str.length() - 2 && str.substr(index, 2) == "pi") {
        // Replace "pi" with "3.14" and continue recursively
        str.replace(index, 2, "3.14");
        return replaceRecursively(str, index + 4); // Skip past "3.14"
    }
    
    // Continue to next character
    return replaceRecursively(str, index + 1);
}

int main(){
    string original = "klsdfjpifdkjfpdjfdpipipii";
    
    cout << "String Replacement Demo" << endl;
    cout << "======================" << endl;
    cout << "Original string: " << original << endl;
    
    // Method 1: Built-in replace
    string str1 = original;
    replaceUsingBuiltIn(str1);
    cout << "Method 1 (Built-in): " << str1 << endl;
    
    // Method 2: Manual replacement
    string str2 = replaceManually(original);
    cout << "Method 2 (Manual):   " << str2 << endl;
    
    // Method 3: Recursive approach
    string str3 = original;
    str3 = replaceRecursively(str3);
    cout << "Method 3 (Recursive): " << str3 << endl;
    
    // Count replacements made
    int count = 0;
    string temp = original;
    size_t pos = 0;
    while((pos = temp.find("pi", pos)) != string::npos) {
        count++;
        pos += 2;
    }
    cout << "\nTotal 'pi' occurrences replaced: " << count << endl;
    
    return 0;
}
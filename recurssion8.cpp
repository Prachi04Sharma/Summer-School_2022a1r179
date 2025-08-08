//WAP to search element in an array and return the index must use recursive approach 
#include<iostream>
using namespace std;

// Method 1: Using static variable (your approach - fixed)
int LinearSearch(int arr[], int size, int target){
    static int i = 0;
    static bool first_call = true;
    
    // Reset static variable for new search
    if(first_call) {
        i = 0;
        first_call = false;
    }
    
    // Base case: element not found
    if(size == 0) {
        first_call = true; // Reset for next call
        return -1;
    }
    
    // Base case: element found
    if(arr[0] == target) {
        first_call = true; // Reset for next call
        return i;
    }
    
    // Recursive case
    i++;
    return LinearSearch(arr+1, size - 1, target);
}

// Method 2: Better approach - passing index as parameter
int LinearSearchBetter(int arr[], int size, int target, int index = 0){
    // Base case: reached end of array
    if(index >= size) {
        return -1;
    }
    
    // Base case: element found
    if(arr[index] == target) {
        return index;
    }
    
    // Recursive case
    return LinearSearchBetter(arr, size, target, index + 1);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5; // Better to use explicit size
    
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Test with element that exists
    int target1 = 3;
    int result1 = LinearSearch(arr, size, target1);
    cout << "Searching for " << target1 << ": ";
    if(result1 != -1) {
        cout << "Found at index " << result1 << endl;
    } else {
        cout << "Not found" << endl;
    }
     // Test with element that doesn't exist
    int target2 = 14;
    int result2 = LinearSearchBetter(arr, size, target2);
    cout << "Searching for " << target2 << ": ";
    if(result2 != -1) {
        cout << "Found at index " << result2 << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}

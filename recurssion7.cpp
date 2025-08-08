#include<iostream>
using namespace std;
// Recursive function to calculate sum of array elements
int sum(int arr[], int n) {
    // Base case: if no elements left
    if (n <= 0) {
        return 0;
    }    
    // Recursive case: current element + sum of remaining elements
    return arr[n-1] + sum(arr, n-1);
}
int main(){
    int arr[5] = {10, 12, 45, 23, 77};
    int size = 5;
    int result = sum(arr, size);
    cout << "Sum of array elements: " << result << endl;
        // Display the array
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
        return 0;
}
//Binary Search (Recursive Implementation)
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int s, int e, int n){
    // Base case: element not found
    if(s > e)
        return -1;
        // Calculate middle index
    int mid = s + (e - s)/2;  // Prevents integer overflow
        // Base case: element found
    if(arr[mid] == n)
        return mid;
        // Recursive cases
    if(arr[mid] < n)
        return BinarySearch(arr, mid+1, e, n);  // Search right half
    else
        return BinarySearch(arr, s, mid-1, n);  // Search left half
}
// Helper function to display array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    // Binary search works only on sorted arrays
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 78};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Binary Search Demo" << endl;
    cout << "==================" << endl;
    displayArray(arr, size);
    
    // Test cases
    int targets[] = {23, 5, 67, 100, 2, 78};
    int numTargets = sizeof(targets)/sizeof(targets[0]);
    
    for(int i = 0; i < numTargets; i++) {
        int target = targets[i];
        int result = BinarySearch(arr, 0, size-1, target);
        
        cout << "Searching for " << target << ": ";
        if(result != -1) {
            cout << "Found at index " << result << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
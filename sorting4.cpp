/* array -> {10,12,11,19,17,16}
   index -> {0, 1, 2, 3, 4, 5}
   
   array -> {10, 11, 12, 16, 17, 19}
   index -> {0, 2, 1, 5, 4, 3}
   
   Sort an array with their index element.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {10,12,11,19,17,16};
    int n = arr.size();
    
    // Create array of pairs (value, original_index)
    vector<pair<int, int>> p(n);
    
    cout << "Original Array:" << endl;
    cout << "Values: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        p[i] = make_pair(arr[i], i);
    }
    cout << endl;
    
    cout << "Indices: ";
    for(int i = 0; i < n; i++){
        cout << i << " ";
    }
    cout << endl;
    
    // Sort pairs by value (first element of pair)
    sort(p.begin(), p.end());
    
    cout << "\nAfter Sorting:" << endl;
    cout << "Values: ";
    for(int i = 0; i < n; i++){
        cout << p[i].first << " ";
    }
    cout << endl;
    
    cout << "Original Indices: ";
    for(int i = 0; i < n; i++){
        cout << p[i].second << " ";
    }
    cout << endl;
    
    // Create sorted array
    vector<int> sortedArr(n);
    for(int i = 0; i < n; i++){
        sortedArr[i] = p[i].first;
    }
    
    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++){
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

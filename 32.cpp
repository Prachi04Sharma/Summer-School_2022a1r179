// WA template function called TotalCount that every takes an array, its size and a value of any data type as parameters. 
//  The function should return the number of times the value appears in the array.
#include<iostream>
#include<unordered_map>
using namespace std;
int findFrequency(int arr[], int s, int k){
    unordered_map<int, int> freq;
    for(int i = 0; i < s; i++){
        freq[arr[i]]++;
    }
    return freq[k];
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 1, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 1;
    findFrequency(arr, size, key);
    return 0;
}

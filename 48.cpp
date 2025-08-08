#include<iostream>
using namespace std;
int binarySearch(int arr[], int target, int e){
    int s = 0;
    while(s<=e){
        int mid = (s + e)/2;
        //cout << s << " "<<e<<" "<mid<<endl;
        if(arr[mid] == target)
        return mid;
        else if(arr[mid] > target)
        e = mid-1;
        else 
        s = mid + 1;
    }
    return -1;
}
#include<iostream>
using namespace std;
void selectionSort(int arr[], int begin, int end){
    if(begin > end)
    return;
    int temp = begin;
    for(int i =begin; i<end; i++){
        if(arr[i] < arr[temp])
        temp = i;
    }
    swap(arr[temp] , arr[begin]);
    selectionSort(arr, begin+1,end);
}
int main(){
    int arr[6] = {10, 19, 13, 18, 17, 14};
}
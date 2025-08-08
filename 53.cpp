#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for(int i =0; i<size; i++){
        int curr = arr[i];
        int j = i-1;
        while(j>0 && arr[j]>curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;

    }
}
int main(){
    int arr[5] = {45, 18, 10, 56, 78};
    insertionSort(arr, 5);
    int i = 0;
    while(i != 5){
        // cout << arr[i] << " ";


    }

}
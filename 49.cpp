#include<iostream>
using namespace std;

    void selectionSort(int arr[], int size){
        int k = 1;
        for(int i =0;i<size-1;i++){
            for(int j = i+1; j<size; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    int main(){
    int arr[6] = {10, 19, 13, 18, 17, 14};
    
}
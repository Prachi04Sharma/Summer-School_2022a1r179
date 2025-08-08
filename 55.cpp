//Merge Sort
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int si, int mid, int li) {
    int n1 = mid - si + 1;
    int n2 = li - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[si + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = si;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(vector <int>& arr,int si,  int li){
    if(si < li){
        int mid = si + (li - si)/2;
        mergeSort(arr, si, mid);
        mergeSort(arr, mid+1, li);
        merge(arr, si, mid, li);
    }
}
int main(){
    vector <int> arr = {12, 56, 16, 23, 89, 90};
    mergeSort(arr, 0, arr.size()-1);
    cout << "Sorted array: ";
    for(int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}
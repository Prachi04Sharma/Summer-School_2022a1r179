//WAP to search element in an array and return the index must use recursive approach 
#include<iostream>
using namespace std;
int LinearSearch(int arr[], int size, int target){
    static int i = 0;
    if(size == 0)
    return -1;
    if(arr[0] == n)
    return i;
    i++;
    LinearSearch(arr+1, size - 1, n);

}
int main(){
    int arr[5] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(int);
cout << "sum: "<<LinearSearch(arr, size, 14);
return 0;
}

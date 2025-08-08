#include<iostream>
using namespace std;
int main(){
int arr[5] = {10,20,30,40,50};
int i = 0;
while(i != 5){
    printf("%d \t", *(arr + i) );
}
        return 0;
    }
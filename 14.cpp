//Array - has fixed size 
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    if(p == NULL){ //if (p == nullptr){
        cout << "Memory Allocation Failed..!"<<endl;
        exit(1);
    }
    else{
        for(int i = 0; i < n; i++){
            scanf("%d",p+i);
        }
        for(int i = 0; i<n; i++){
            printf("%d", p + i);
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num1 = 20;
    int num2 = 30;
    int *ptr = &num1;
    printf("Value of num1: %d\n", *ptr); // 20
    ptr++; // Incrementing pointer to point to next integer
    printf("%d \n", ptr);
return 0;
}
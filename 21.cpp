//Constant Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    const float hello = 3.14;
    //const float *const helloPtr; -Error 
    //helloPtr = &hello;     -Error
    const float *const helloPtr = &hello;
    float bolo = 22.97;
    //helloPtr = &bolo;  -Error
    return 0;
}
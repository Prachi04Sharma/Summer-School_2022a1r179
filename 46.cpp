// Circular queue implementation
#include<iostream>
#define size 5
using namespace std;
class cqueue{
    public:
    int f = -1;
    int r = -1;
    int arr[size];
    bool isEmpty(){
        if(f == -1)
        return true;
        else
        return false;
    }
    bool isFull(){
        if((r+1) % size == f)
        return true;
        else
        return false;
    }
    void push(int val){
        if(isFull()){
            cout << "Queue is full: \n";
            return;
        }
        if(isEmpty())
            f = r = 0;
        else
            r = (r+1) % size;
        arr[r] = val;
    }

    void pop(){
        if(isEmpty()){
            cout << "Queue is empty: \n";
            return;
        }
        if(f == r){
            f = r = -1;
        } else {
            f = (f+1) % size;
        }
    }

    int front(){
        if(isEmpty()){
            cout << "Queue is empty: \n";
            return -1;
        }
        return arr[f];
    }
};
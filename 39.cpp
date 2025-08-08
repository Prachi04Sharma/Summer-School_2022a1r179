// Queue implementation with fixed size
#include<iostream>
#define size 5
using namespace std;
class myQueue{
    public:
    int arr[size];
    int f;
    int r;
    myQueue() : f(-1), r(-1){}   //Constructor 

    void push(int x) {
        if (r == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (f == -1 && r == -1) {
            f = r = 0;
        } else {
            r++;
        }
        arr[r] = x;
    }

    void pop() {
        if (f == -1 || f > r) {
            cout << "Queue Underflow\n";
            return;
        }
        f++;
        if (f > r) {
            f = r = -1;
        }
    }

    bool empty() {
        return (f == -1 || f > r);
    }
};
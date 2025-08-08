//Circular double ended queue
#include <iostream>
#define SIZE 5
using namespace std;

class CircularDeque {
    int arr[SIZE];
    int front, rear;

public:
    CircularDeque() : front(-1), rear(-1) {}

    bool isFull() {
        return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
    }

    bool isEmpty() {
        return (front == -1);
    }

    void insertFront(int x) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = SIZE - 1;
        } else {
            front--;
        }
        arr[front] = x;
    }

    void insertRear(int x) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (rear == SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = SIZE - 1;
        } else {
            rear--;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    CircularDeque dq;
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);
    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;
    dq.deleteFront();
    dq.deleteRear();
    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;
    return 0;
}
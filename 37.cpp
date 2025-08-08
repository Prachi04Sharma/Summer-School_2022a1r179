//Queue - single, circular, double circular 
//Queue: It is a linear data structure that stores the data in First in First out order. 
//Eg - printing pages in printer.
//Eg - System Process , downloading files in some application.
/*Operations - implemented on the queue-
enqueue() - adding an element to the end of the queue.
dequeue() - removing an element from the front of the  queue.
front() - retrieving the element at the front of the queue without removing it.
rear() - retrieving the element at the rear of the queue without removing it.
empty() - return true if queue is empty, otherwise it return false.*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    cout << q1.front()<< endl; // 10
    cout<< q1.back()<<endl;    //60
q1.push(70);
q1.pop();
  cout << q1.front()<< endl; // 20 
    cout<< q1.back()<<endl;    //70
    return 0;
}
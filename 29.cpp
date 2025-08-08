// implement a function to reverse a doubly linkedlist.
#include<iostream>
using namespace std;

// Node structure for doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;
        // Constructor
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Function to insert a node at the end of the doubly linked list
void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    
    // If the list is empty
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // Add at the end
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// Function to display the doubly linked list forward
void displayForward(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to display the doubly linked list backward
void displayBackward(Node* tail) {
    Node* temp = tail;
    cout << "Backward: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

// Function to reverse the doubly linked list
void reverseDoublyLinkedList(Node* &head, Node* &tail) {
    // Handle edge cases
    if (head == NULL || head->next == NULL) {
        return; // Empty list or single node (already reversed)
    }
    
    Node* current = head;
    Node* temp = NULL;
    
    // Swap next and prev pointers for all nodes
    while (current != NULL) {
        // Store the previous node
        temp = current->prev;
        
        // Swap the prev and next pointers
        current->prev = current->next;
        current->next = temp;
        
        // Move to the next node (which is now current->prev due to swapping)
        current = current->prev;
    }
    
    // Swap head and tail pointers
    temp = head;
    head = tail;
    tail = temp;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    // Create a doubly linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    for (int i = 1; i <= 5; i++) {
        insertAtTail(head, tail, i);
    }
    
    cout << "Original Doubly Linked List:" << endl;
    displayForward(head);
    displayBackward(tail);
    
    // Reverse the doubly linked list
    reverseDoublyLinkedList(head, tail);
    
    cout << "\nReversed Doubly Linked List:" << endl;
    displayForward(head);
    displayBackward(tail);
    
    // Free memory
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}

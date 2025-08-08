//Implement a function to delete series of node.
//deleteSeries(head, 2, 5);
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;    
    Node(int val) {
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);  
        if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
        temp->next = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deleteSeries(Node* &head, int start, int end) {
    // Handle edge cases
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    if (start < 1) {
        cout << "Invalid starting position!" << endl;
        return;
    }
    
    if (start > end) {
        cout << "Start position cannot be greater than end position!" << endl;
        return;
    }
    if (start == 1) {
        for (int i = 1; i <= end && head != NULL; i++) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
        }
        return;
    }
    Node* temp = head;
    for (int i = 1; i < start - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "Starting position is out of bounds!" << endl;
        return;
    }
            Node* startNode = temp->next;
    Node* endNode = temp;    
    for (int i = start - 1; i <= end && endNode->next != NULL; i++) {
        endNode = endNode->next;
    }
    temp->next = endNode->next;
    Node* current = startNode;
    while (current != endNode->next) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}

int main() {
    Node* head = NULL;    
    for (int i = 1; i <= 10; i++) {
        insertAtTail(head, i);
    }    
    cout << "Original Linked List:" << endl;
        cout << "Linked List after deleting nodes from position 2 to 5:" << endl;
    display(head);
    cout << "\nDeleting nodes from position 3 to 6:" << endl;
    deleteSeries(head, 3, 6);
    display(head);
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
// Doubly linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

}; 

// insert a node at the head position
void insertAtHead(Node* &head, int d){
     Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

// insert a node at the tail position
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

// insert a node at a position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // Insert at start
     if(position == 1){
     insertAtHead(head, d);
     return;
     }


    Node*temp = head;
    int cnt = 1;
     while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
     }

     // Insert at tail
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    
     // creating a node for d
     Node * nodeToInsert = new Node(d);

     nodeToInsert -> next = temp -> next;
     temp -> next -> prev = nodeToInsert;
     temp -> next = nodeToInsert;
     nodeToInsert -> prev = temp;

}

// traversing a linked list 
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Finding the length of a linked list
int getlength(Node* &head){
      int len = 0;
    Node* temp = head;

    while(temp != NULL){
       
        len++;
        temp = temp -> next;
       
    }
    cout << endl;
     return len;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    cout << getlength(head);
    cout << endl;

    // insertion
    // at start
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);
    insertAtPosition(tail, head, 1, 101);
    print(head);
    insertAtPosition(tail, head, 8, 104);
    print(head);
    


    return 0;
}
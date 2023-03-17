#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};
void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void ReverseLL(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL)
    {
        Node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);

    ReverseLL(head);
    print(head);

    return 0;
}
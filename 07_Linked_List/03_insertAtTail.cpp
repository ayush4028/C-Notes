#include<bits/stdc++.h>
// Insert at head
using namespace std;
// Since I do not have any inbuilt format to store data and address both into the node so we have to make a new node by class
class Node{
    public : 
    int data;
    Node * next;
    
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node * &head , int d)
{
    Node*temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d)
{
     Node*temp = new Node(d);
     tail -> next = temp;
     tail = temp;
}

void print(Node* &head)
{
    Node * temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;

    }
    cout << endl;
}

int main() {

    // created a new node
    Node* node1 = new Node(10);   // as in dynamic allocation we write int * node1 = new int;

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // pointed head to node1
    Node * head = node1;
    Node * tail = node1;
    print(head);

   // insertAtHead(head , 12);
   // print(head);
    insertAtTail(tail, 13);
    print(head);
    insertAtTail(tail, 14);
    print(head);
    
    



    return 0;
}
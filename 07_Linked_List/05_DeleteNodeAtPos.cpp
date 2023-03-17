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
    // destructor 
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
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
void insertAtPos(Node * &head, Node* &tail, int position, int d){
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
     temp -> next = nodeToInsert;
}

// Deleting a node from a linked list
void deleteNode(int position, Node* &head){
    Node* temp = head;
    // deleting start node
    if(position == 1){
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    // deleting any middle node or last node 
    else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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
    insertAtPos(head, tail,  3, 22);
    print(head);

    // To verify head and tail
    cout << head -> data << " " << tail -> data << endl;
    
    deleteNode(4, head);
    print(head);


    return 0;
}
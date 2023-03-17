#include<bits/stdc++.h>
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

int main() {

    // created a new node
    Node* node1 = new Node(10);   // as in dynamic allocation we write int * node1 = new int;

     cout << node1 -> data << endl;
     cout << node1 -> next << endl;
    return 0;
}
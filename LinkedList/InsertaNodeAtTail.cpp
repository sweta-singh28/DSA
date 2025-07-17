#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;

    }

};


//i want to insert a node at the right most end of the linked list
//three steps to insert at the tail
// step 1:
// create a new Node
// step 2:
// tail->next = new Node
// step 3:
// tail = newNode

void insertAtTail(Node* &head, Node* &tail, int data){
    //step 1: create  anew node
    Node* newNode = new Node(data);
    if(tail == NULL){
        //empty list case
        head = newNode;
        tail = newNode;
    }

    //LL is not empty
    else{
    //step 2: connect with tail node
    tail->next = newNode;
    //step 3: update tail
    tail = newNode;

    }

}

void print(Node* &head){
    Node* temp = head;
    while(temp != 0){
        cout<<temp->data;
        temp = temp->next;
    }

}

int main(){
    Node* head  =NULL;
    Node* tail = NULL;

    //cout<<"Printing the linked list before inserting the node at the beginning."<<endl;
    //print(head);
    //cout<<endl;


    
    insertAtTail(head, tail, 99);
    insertAtTail(head, tail, 99);
    insertAtTail(head, tail, 99);
    insertAtTail(head, tail, 99);
    insertAtTail(head, tail, 99);
    cout<<"Printing the Linked List after inserting the node: "<<endl;
    print(head);
    


    return 0;
}
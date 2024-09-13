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


//I want to insert a node right at the head of the linked list
void insertAtHead(Node* &head, Node* &tail, int data){       //&head by reference -> cause i want to change in original ll not in copy.


    //check for empty LL
    if(head == NULL){
        Node* newNode  = new Node(data);
        head = newNode;
        tail = newNode;
        return;

    }

    //step1: Create a NewNode
    Node* newNode = new Node(data);
    //step2: NewNode->next = head
    newNode->next = head;
    //step3: head = newNode
    head = newNode;

}




//I want to insert a node right at the end of the LL
void insertAtTail( Node* &head, Node* &tail, int data){   
    //check for empty LL
    if(head == NULL){
        Node* newNode  = new Node(data);
        head = newNode;
        tail = newNode;
        return;

    }

    //step 1: Create a node
    Node* newNode = new Node(data);
    //step 2: tail->next = newNode
    tail->next = newNode;
    //step 3: tail = newNode
    if(head == NULL){
        head = newNode;
    }
    tail = newNode;


}



void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){

    //Node* head = new Node(10);
    Node* head = NULL;      //if the head pointer is null.
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
     insertAtHead(head, tail, 50);
    //insertAtHead(head, tail, 70);
   // insertAtHead(head, tail,  90);

    insertAtTail(head, tail, 77);


    print(head);
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


//TC----> O(n)
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


//TC----> O(n)
int getLength(Node* head){
    int len = 0;
    Node* temp = head;


    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;       
    }
    else{
        //LL is non empty
        //step1: Create a newNode
        Node* newNode = new Node(data);
        //step2: 
        newNode->next = head;
        //step3:
        head->prev = newNode;
        //step4:
        head = newNode;


    }
}
void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is non empty
        //step1: Create a new node
        Node* newNode = new Node(data);
        //step2:
        tail->next = newNode;
        //step3:
        newNode->prev = tail;
        //step4:
        tail = newNode;

    }
}



int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;

    first->next = second;
    second->next = third;
    second->prev = first;
    third->prev = second;
    

    print(first);
    cout<<endl;

    insertAtHead(head, tail, 100);
    print(head);
    cout<<endl;

    insertAtTail(head, tail, 98);
    print(head);
    cout<<endl;


    
    return 0;
}
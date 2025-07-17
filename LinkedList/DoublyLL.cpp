#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;


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



void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

//we want to insert a node at the beginning 
void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //LL is non empty
    // 4 steps to insert a node at head
    // step 1: Create a node
    // step 2: newNode->next = head
    // step 3: head->prev = newNode
    // step 4: head = newNode

    //step 1:
    Node* newNode = new Node(data);
    //step 2:
    newNode->next = head;
    //step 3:
    head->prev = newNode;
    //step 4:
    head = newNode;
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
    Node* second = new Node(30);
    Node* third = new Node(34);

    Node* head = first;
    Node* tail = third;


    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout<<endl;

    cout<<"Inserting 677 at the starting."<<endl;
    insertAtHead(first, tail, 677);
    print(first);
    cout<<endl;

    cout<<"Inserting 88 at the last."<<endl;
    insertAtTail(first, tail, 88);
    print(first);
    cout<<endl;






    return 0;
}
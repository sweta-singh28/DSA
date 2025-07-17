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

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverse(Node* &prev, Node* &curr){
    //base case
    if(curr == NULL){
        return prev;
    }
    //solve 1 case then recursion will handle
    Node* forward = curr->next;
    curr->next = prev;

    //recursive call
    reverse(curr, forward);
}



int main(){

    //Node* head = new Node(10);
    Node* head = NULL;      //if the head pointer is null.
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail,  90);

   


    print(head);
    cout<<endl;
   
   

   cout<<"Printing the reversed list: "<<endl;
   Node* prev = NULL;
   Node* curr = head;
   head = reverse(prev, curr);
   print(head);
   cout<<endl;




    
    return 0;
}
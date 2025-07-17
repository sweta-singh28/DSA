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

    //TODO: Write a destructor to delete node
    ~Node(){
        cout<<"Node with value: "<<this->data<<" deleted"<<endl;
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



int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}



void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    
    //if we want to insert at 0th index then call insertAtHead()
    if(position == 0){
        insertAtHead(head, tail, data);
        return;
    }

    //if we want to insert at last then call insertAtTail()
    int len = findLength(head);
    if(position >= len){
        insertAtTail(head, tail, data);
        return;
    }

    //insertion at middle
    //step 1: find the position   (previous pointer and current pointer)
    int i = 1;
    Node* prev = head;
    while (i<position)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    //step2: Create a newNode
    Node* newNode = new Node(data);

    //step3: newNode->next = curr
    newNode-> next = curr;

    //step4: prev->next = newNode
    prev->next = newNode;
}

void deleteNode(int position, Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"Cannot delete, LL is empty";
        return;
    }
    //deleting first node
    if(position == 1){
        Node* temp =  head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findLength(head);

    
    //deleting last node
    if(position == len){
        //step1: find previous
        int i=1;
        Node* prev = head;
        while (i<position-1)
        {
            prev = prev-1;
            i++;
        }
        
        //step2:
        prev->next = NULL;
        //step3
        Node* temp = tail;
        //step4:
        tail = prev;
        //step5:
        delete temp;
        return;
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
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail,  90);

    insertAtTail(head, tail, 77);


    print(head);
    cout<<endl;
   // cout<<"head: "<<head->data<<endl;
    //cout<<"tail: "<<tail->data<<endl;

    //insertAtPosition(10, 2, head, tail);
    //cout<<endl;

   // print(head);
   // cout<<endl;
   // cout<<"head: "<<head->data<<endl;
   // cout<<"tail: "<<tail->data<<endl;
   

   //delete starting node
   deleteNode(1, head, tail);
   cout<<endl;
   print(head);
   cout<<endl;




    
    return 0;
}
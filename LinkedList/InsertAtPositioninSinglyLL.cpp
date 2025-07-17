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

void insertAtTheHead(Node* &head, int data){
    //step 1:
    Node* newNode = new Node(data);
    //step 2:
    newNode->next = head;
    //step 3:
    head = newNode;
}





 
void  insertAtPosition(int data, int position, Node* &head, Node* &tail){
    //first check if ll is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    //insert at starting----> 1 case
    //if we want to insert at 0 index it means insert at head
    if(position == 0){
        insertAtTheHead(head, data);
        return;
    }

    //insert at last---> 3rd case
    // insert at last----> for that call insertAtTail() (if you dk the length of the create a length function )
    // if(position <= length()){
    //     insertAtTail()
    //     return;
    // }



    //insert at middle----> 2nd case
    //step 1: Find position: prev & current
    int i = 1;
    Node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    //step 2: Create a node
    Node* newNode = new Node(data);

    //step 3: newNode-> next = curr
    newNode-> next = curr;

    //step 4: prev->next = newNode
    prev->next = newNode;


}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    Node* head = new Node(10);
    Node* tail = new Node(10);

    
    insertAtTheHead(head, 5);
    insertAtTheHead(head, 20);
    insertAtTheHead(head, 67);
    insertAtTheHead(head ,80);
    insertAtTheHead(head ,70);

    print(head);
    cout<<endl;

    insertAtPosition(101, 0, head, tail);
    print(head);



    return 0;
}

//edge case
// insert at first---> for that call insertAtTheHead()
// insert at last----> for that call insertAtTail() (if you dk the length of the create a length function )
// if(position <= length()){
//     insertAtTail()
//     return;
// }
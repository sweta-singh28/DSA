#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;

    }
};

//i want insert a node right at the head of the LL (always use byreference)
// three steps to insert a node at the beginning
// a. creat a new Node
// b. newnode->next = head
// c. head = new Node
void insertAtTheHead(Node* &head, int data){
    //step 1:
    Node* newNode = new Node(data);
    //step 2:
    newNode->next = head;
    //step 3:
    head = newNode;
}

//print the linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != 0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    
    Node* head = new Node(10);

    cout<<"Printing the linked list before inserting the node at the beginning."<<endl;
    print(head);
    cout<<endl;


    insertAtTheHead(head, 5);
    insertAtTheHead(head, 20);
    insertAtTheHead(head, 67);
    insertAtTheHead(head ,80);
    insertAtTheHead(head ,70);
    
    cout<<"Printing the Linked List after inserting the node: "<<endl;
    print(head);



    return 0;
}
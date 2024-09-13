#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this->data = data;
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



int main(){
    Node* head = new Node(10);
    Node* second  = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(900);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    //sixth->next = NULL;

    cout<<"Printing the LinkedList "<<endl;
    print(head);


    return 0;
}
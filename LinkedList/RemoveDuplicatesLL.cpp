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

void removeDuplicates(Node* &head){
    //LL is empty
    if(head == 0){
        cout<<"LL is empty."<<endl;
    }
    //ll has only 1 node
    if(head->next == 0){
        cout<<"LL has single node."<<endl;
    }

    //LL has more than 1 node
    Node* curr = head;
    while(curr != NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            //equal
            Node* temp = curr->next;
            curr->next = curr->next->next;
            //delete node
            temp->next = NULL;
            delete temp;

        }
        else{
            //not equal means aage badh jao
            curr = curr->next;
        }
    }




}


int main(){

    Node* head = new Node(10);
    Node* second = new Node(10);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(60);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    

    cout<<"Printing the LL before removing."<<endl;
    print(head);
    cout<<endl;

    cout<<"Printing the LL after removing duplicates."<<endl;
    removeDuplicates(head);
    print(head);







    return 0;
}
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

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

}

Node* reverseLL(Node* head){
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL){
        //first the next was pointing at null now its pointing to current next nd it save the address of the nodes after the current
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}



int main(){

     Node* first = new Node(10);
    Node* Second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(70);
    Node* fifth = new Node(50);


    first->next = Second;
    Second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<"Printing the LL"<<endl;
    print(first);
    cout<<endl;

    cout<<"Printing the Reversed LL."<<endl;
    Node* newHead = reverseLL(first);
    print(newHead);
    cout<<endl;

    



    return 0;

}
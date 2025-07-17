#include<iostream>
using namespace std;
class Node{
    public:
    //node creation
    int data;
    Node* next;

    //constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }

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
    Node* first = new Node(2);
    Node* second = new Node(5);
    Node* third = new Node(4);
    Node* fourth = new Node(8);
    Node* fifth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    cout<<"Printing data: "<<endl;
    print(first);





    return 0;
}
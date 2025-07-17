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

//length
int length(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;

}


int main(){
        Node* first = new Node(10);
        Node* second = new Node(8);
        Node* third = new Node(4);
        Node* fourth = new Node(16);
        Node* fifth = new Node(76);


        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fifth;

        cout<<"length is: "<<length(first);

        


    return 0;
}
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

bool findKey(int key, Node* &head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        else{
            temp = temp->next;
        }

    }


}



int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(50);
    Node* fourth = new Node(80);
    Node* fifth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int key = 5;

    if(findKey(key, head) == 1){
        cout<<"Element is present."<<endl;
    }
    else{
        cout<<"Element is not present."<<endl;
    }



    return 0;
}
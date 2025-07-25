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

Node* removeLoop(Node* &head){
    //LL is empty
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
        return NULL;
    }

    //LL is non empty
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        //1st meet up of fast nd slow
        if(fast == slow){
            slow = head;
            break; 
        }

    }

    Node* prev = fast;

    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    //return slow;


}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
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
    ninth->next = fifth;

    

    removeLoop(head);
    
    cout<<"Printing the LL after removing the loop."<<endl;
    print(head);

    


    return 0;
}
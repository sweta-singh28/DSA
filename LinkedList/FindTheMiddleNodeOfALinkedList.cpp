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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* getMiddle(Node* &head){
    //LL is empty
    if(head == NULL)
    {
        cout<<"LL is empty."<<endl;
        return head;
    }

    //Only 1 node in LL
    if (head->next == NULL)
    {
        return head;
    }

    //LL have more than 1 node
    Node* slow = head;
    Node* fast = head;
    
    //fast - 2 times move
    //slow - 1 times move
    while(slow != NULL && fast != NULL){
        //move 1 time then check is fast is null or not if not null then move 1 more time
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow =slow->next;
        }
    }
    return slow;
    
}

int main(){


    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;


    print(head);
    cout<<endl;

    cout<<"The middle Node is: "<<getMiddle(head)->data<<endl;



    return 0;
}
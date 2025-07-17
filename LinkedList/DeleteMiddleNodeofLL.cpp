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

Node* deleteMiddleNode(Node* &head){
    //LL is empty
    if(head == NULL)
    {
        delete head;
        return NULL;
    }

    //Only 1 node in LL
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    //LL have more than 1 node
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    
    //fast - 2 times move
    //slow - 1 times move
    while(slow != NULL && fast != NULL){
        //move 1 time then check is fast is null or not if not null then move 1 more time
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            prev = slow;
            slow =slow->next;
        }
    }
    prev->next = slow->next;
    delete slow;

    return head;
    
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

    

    deleteMiddleNode(head);
    cout<<"Deleted Middle Node"<<endl;
    print(head);



    return 0;
}
//DETECT AND DELETE LOOP   (impt)
    //1. Check loop is present or not in LL
    //2. Find starting point of loop
    //3. Remove Loop



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

bool CheckForLoop(Node* &head){
    //LL is empty
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
    }

    //LL is non empty
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        //if fast nd slow is pointing the same node it means loop is present.
        if(fast == slow){
            return true;
        }
    }


    //loop is not present
    return false;
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
    ninth->next = fifth;     //here loop
    
    
   // print(head); infinite loop

    if(CheckForLoop(head) == false){
        cout<<"Loop is absent."<<endl;
    }
    else{
        cout<<"Loop is present."<<endl;
    }
    


    return 0;
}
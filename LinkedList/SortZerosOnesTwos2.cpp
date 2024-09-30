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
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

 Node* sortZerosOnesTwos(Node* &head){
    
    //Create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //traverse the original LL
    Node* curr = head;
    while (curr!=NULL)
    {
        if (curr->data == 0)
        {   
            //Take out the zero node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;       

            //append the zero node in zeroHead LinkedList
            zeroTail->next = temp;     
            zeroTail = temp;
        }

        if (curr->data == 1)
        {
            //Take out the zero node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;       

            //append the zero node in zeroHead LinkedList
            oneTail->next = temp;     
            oneTail = temp;
            
        }

        if (curr->data == 2)
        {
            //Take out the zero node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;       

            //append the zero node in zeroHead LinkedList
            twoTail->next = temp;     
            twoTail = temp;
            
        }
        
        
        
    }

    //three (zero one two) LinkedList is ready, now join them



    //remove dummy nodes


    //return head of the modified LinkedList
    



}

int main(){
    Node* head = new Node(2);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);
    Node* sixth = new Node(2);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    cout<<"Input LinkedList is: ";
    print(head);

    sortZerosOnesTwos(head);

    cout<<"Output LinkedList is: ";
    print(head);


    


    return 0;
}
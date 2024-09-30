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
    cout<<endl;
    

}

void removeDuplicate(Node* &head){
    if(head == NULL){
        //LL is empty
        cout<<"LinkedList is empty."<<endl;
        return;
    }

    if (head->next == NULL)
    {   
        //only 1 Node
        cout<<"Single Node in LinkedList."<<endl;
        return;
    }

    //more than 1 Node In lINkedList
    Node* curr = head;

    while (curr != NULL)
    {    
        //Current data current's next data is equal
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {   
            //temp is the track of the Duplicate Node
            Node* temp = curr->next;
            curr->next = curr->next->next;

            //Now delete the Duplicate Node
            temp->next = NULL;
            delete temp;    

        }
        else{
            //Current data current's next data is not equal
            curr = curr->next;
        }
        
    }
    

    

}



int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    

    cout<<"Input LinkedList is: ";
    print(head);

    removeDuplicate(head);
    cout<<"Ouput LinkedList is: ";
    print(head);



}
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

// Function to detect loop and return its length
int findLoopLength(Node* &head){
    if(head == NULL) return 0;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            // Loop detected
            Node* temp = slow;
            int count = 1;
            while(temp->next != slow){
                count++;
                temp = temp->next;
            }
            return count;
        }
    }

    return 0; 
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
    ninth->next = fifth; // loop starts here

    int len = findLoopLength(head);
    cout<<"The length of loop is: "<<len<<endl;

  

    return 0;
}

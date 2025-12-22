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

void removeLoop(Node* &head){
    //ll has only single element
    if(head->next == NULL){
        cout<<"Linked List is empty."<<endl;
    }

    bool loopPresent = false;

    //more than 1 element
    //find loop
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(fast == slow){
            loopPresent =  true;
            break;
        }
    }
    //set slow at head
    if(loopPresent){
        slow = head;
    }

     if (slow == fast) {
                while (fast->next != slow)
                    fast = fast->next;
                fast->next = NULL;
                return;
            }

            Node* prev = NULL;
            while (slow != fast) {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }

            // Step 3: Remove loop
            prev->next = NULL;

}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = fourth;

    removeLoop(first);
    print(first);






    return 0;
}
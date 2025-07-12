#include<iostream>
using namespace std;


//Created a node
class Node{
        public:
        int data;
        Node* next;

        //constructor
        Node(){
            this->data = 0;
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

}
int main(){

    Node* first = new Node(10);
    Node* Second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(70);
    Node* fifth = new Node(50);


    first->next = Second;
    Second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<"Printing the LL"<<endl;
    print(first);

    
    return 0;
}
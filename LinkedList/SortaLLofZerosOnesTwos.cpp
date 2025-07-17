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

void sortZerosOnesTwos(Node* &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    //step 1: count no. of ones, twos and zeros
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;

    }


    //step 2: fill the zeros, ones, twos
    temp = head;
    while(temp != NULL){
        //fill zeros
        while(zeroCount--){
            temp->data = 0;
            temp = temp->next;        
        }

        //fill ones
        while(oneCount--){
            temp->data = 1;
            temp = temp->next;
        }

        //fill twos
        while(twoCount--){
            temp->data = 2;
            temp = temp->next;
        }
    }


    
    }


int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(2);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    
    cout<<"Input LL: ";
    print(head);

    sortZerosOnesTwos(head);

    cout<<"Output LL: ";
    print(head);





    return 0;
}
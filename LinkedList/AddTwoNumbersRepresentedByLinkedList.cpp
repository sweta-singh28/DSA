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
//REVERSE LOGIC

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;   
}


Node* solve(Node* &head1, Node* &head2){
    //step1: Reverse both LL
    head1 = reverse(head1);
    head2 = reverse(head2);

    //step2: Add both LL
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;

    //add two LL
    while (head1 != NULL && head2 != NULL)
    {   
        //Calculate sum
        int sum = carry + head1->data + head2->data;
        //find digit to create node for
        int digit = sum%10;
        //Calculate carry
        carry = sum/10;

        //create a new node for the digit
        Node* newNode = new Node(digit);
        //attach the new node in ans LinkedList
        if (ansHead ==NULL)
        {
            //inserting the first node
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;      
    }
    
    //when length of head1 is greater than head2 List
    while (head1 != NULL)
    {
        int sum  = carry + head1->data;
        int digit = sum % 10;
        carry = sum /10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail  = newNode;
        head1 = head1->next;
    }
    
    //when length of head2 is greater than head1 List
    while (head2 != NULL)
    {
        int sum  = carry + head2->data;
        int digit = sum % 10;
        carry = sum /10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail  = newNode;
        head2 = head2->next;
    }

    //we need handle carry
    while (carry != 0)
    {
        int sum = carry;
        int digit  = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        ansTail -> next = newNode;
        ansTail  = newNode;
    }
    

    //Step3: Reverse ans LL
    ansHead = reverse(ansHead);
    return ansHead;
}


int main(){
    
    //creating 1st LinkedList
    Node* head1 = new Node(2);
    Node* second1 = new Node(4);

    head1->next = second1;

    //Creating 2nd LinkedList
    Node* head2 = new Node(2);
    Node* second2 = new Node(3);
    Node* third2 = new Node(4);

    head2->next = second2;
    second2->next = third2;


    Node* ans = solve(head1, head2);
    print(ans);



    return 0;
}
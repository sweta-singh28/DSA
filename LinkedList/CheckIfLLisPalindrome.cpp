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

Node* reverseHalfLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}

bool checkPalindrome(Node* &head){
    //if ll is empty
    if(head == 0){
        return false;
    }
    //single node
    if(head->next == 0){
        return true;
    }

    //LL has more than 1 node
    //step 1: find middle node
    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL && fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        //slow pointer is pointing to middle node
    }
    

    //step 2: reverse LL after the middle node
    Node* reversedLLHead = reverseHalfLL(slow->next);

    //join the reversed LL into the left part nd then start comparing
    slow->next = reversedLLHead; //optional step

    //step 3: start comparing both halves 
    //create 2 temp nodes
    Node* temp1 = head;
    Node* temp2 = reversedLLHead;
    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            //not a palindrome
            return false;
        }
        else{
            //if data is equal , then aage badh jao
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    //it means it is a palindrome
    return true;

}





int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    bool isPalindrome = checkPalindrome(first);

    if(isPalindrome){
        cout<<"LL is a valid palindrome"<<endl;
    }
    else{
        cout<<"LL is not a Palindrome"<<endl;
    }

    



    return 0;
}
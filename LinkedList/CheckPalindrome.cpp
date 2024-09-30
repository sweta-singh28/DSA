#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;  // return the new head after reversal
}

bool checkPalindrome(Node* head) {
    if (head == NULL) {
        cout << "LinkedList is empty." << endl;
        return true;
    }

    if (head->next == NULL) {
        // only 1 node
        return true;
    }

    // greater than 1 node
    // step A: find the middle node.
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // slow pointer is pointing to middle node

    // step B: Reverse linkedlist after middle/slow node
    Node* reverseLLHead = reverse(slow->next);
    // join the reversed LL into the left part
    slow->next = reverseLLHead;

    // step C: start comparison
    Node* temp1 = head;
    Node* temp2 = reverseLLHead;
    while (temp2 != NULL) {
        if (temp1->data != temp2->data) {
            // not a palindrome
            return false;
        } else {
            // if data is equal, move forward
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    bool isPalindrome = checkPalindrome(head);

    if (isPalindrome) {
        cout << "LinkedList is a valid Palindrome." << endl;
    } else {
        cout << "LinkedList is not a Palindrome." << endl;
    }

    return 0;
}

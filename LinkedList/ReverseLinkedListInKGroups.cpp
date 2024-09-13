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

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// TC --> O(n)
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* head, int k) {
    // Empty list
    if (head == NULL) {
        cout << "LL is empty." << endl;
        return NULL;
    }

    // When the value of k is greater than the number of nodes in the list
    int len = getLength(head);
    if (k > len) {
        cout << "Please enter a valid value for k." << endl;
        return head;
    }

    // Step A: Reverse the first k nodes of the list
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step B: Recursive call for the remaining nodes
    if (next != NULL) {
        head->next = reverseKNodes(next, k); // Pass the rest of the list for reversal
    }

    // Step C: Return the new head of the modified list
    return prev;
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(900);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    // Printing the original LinkedList
    cout << "Original LinkedList: ";
    print(head);

    // Reversing every k nodes
    int k = 3;
    head = reverseKNodes(head, k);

    // Printing the modified LinkedList
    cout << "Reversed LinkedList in groups of " << k << ": ";
    print(head);

    return 0;
}

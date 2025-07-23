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



class Stack {
    private:
    Node* top;  // Pointer to the top node

    public:
    Stack() {
        top = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }


    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow, can't delete element." << endl;
        } else {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }


    int getTop() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }


    bool empty() {
        return top == NULL;
    }


    int currentSize() {
        int count = 0;
        Node* temp = top;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Current size: " << s.currentSize() << endl;

    return 0;
}

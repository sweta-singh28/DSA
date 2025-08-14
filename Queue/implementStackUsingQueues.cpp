#include<iostream>
#include<queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
        int size = q.size();
        while (size-- > 1) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (!q.empty())
            q.pop();
        else
            cout << "Stack is empty\n";
    }

    int top() {
        if (!q.empty())
            return q.front();
        else {
            cout << "Stack is empty\n";
            return -1;
        }
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30
    st.pop();

    cout << "Top after pop: " << st.top() << endl; // 20
    cout << "Is empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}

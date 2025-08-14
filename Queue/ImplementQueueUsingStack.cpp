#include<iostream>
#include<queue>
using namespace std;
class stack{
    public: 
    queue<int>q;
    int size;

    void push(int data){
        q.push(data);
        int size = q.size();
         while (size-- > 1) {
            q.push(q.front());
            q.pop();
        }

    }

    int pop(){
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top(){
        return q.front();

    }

    bool empty(){
        return q.empty();
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;   
    cout << "Pop: " << s.pop() << endl;   
    cout << "Top: " << s.top() << endl;   
    cout << "Empty: " << s.empty() << endl; 

    return 0;
}

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>s;

    //step1: put all element from queue to stack
    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //step2: put all element from stack into queue
    while (!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
    
    
}
int main(){
    queue<int>q;

    q.push(3);
    q.push(6);
    q.push(4);
    q.push(23);
    q.push(5);
    q.push(10);

    reverseQueue(q);

    cout<<"Printing Queue: "<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    

    return 0;







    //Time complexity--->O(n)
    //Space complexity---->O(n)
}
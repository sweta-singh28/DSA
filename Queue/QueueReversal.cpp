#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int>st;
    //step 1: put all element in stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }

    //step 2:put all element from stack to queue
    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    
    }



}

int main(){
    queue<int>q;
    q.push(3);
    q.push(2);
    q.push(9);
    q.push(2);
    q.push(8);
    

    reverseQueue(q);
    cout<<"Printing the reversed queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }



    return 0;
}
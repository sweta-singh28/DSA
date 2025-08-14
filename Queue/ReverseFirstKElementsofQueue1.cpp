#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseK(queue<int>&q, int k){
    int n = q.size();
    int count = 0;
    stack<int>st;

    //if k>n && k==0(cant reverse)
    if(k == 0 || k > n){
        return;
    }

    //step A: move k elements in stack from queue
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        //push the element in stack
        st.push(temp);
        count++;

        if(count == k){
            break;
        }

    }

    //step B: stack-> queue 
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
    }

    //step C: push n-k element from q front to q back
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }

}


int main(){
    queue<int>q;


    q.push(3);
    q.push(6);
    q.push(4);
    q.push(23);
    q.push(5);


    reverseK(q, 3);

    cout<<"Printing the queue: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;



    return 0;
}
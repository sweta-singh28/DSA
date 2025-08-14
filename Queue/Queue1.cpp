#include<iostream>
#include<queue>
using namespace std;
int main(){
    //creation 
    queue<int>q;

    //insertion
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);

    //size of the queue
    cout<<"The size of the queue is: "<<q.size()<<endl;

    //remove
    q.pop();
    cout<<"The size of the queue is: "<<q.size();

    //empty
    if(q.empty()){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue is not empty."<<endl;
    }

    //front element of the queue
    cout<<"Front element is: "<<q.front();

    return 0;
}
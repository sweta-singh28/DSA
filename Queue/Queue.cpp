#include<iostream>
#include<queue>
using namespace std;
int main(){
    //queue creation
    queue<int>q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(14);

    //size
    cout<<"The size of queue is: "<<q.size()<<endl;

    //removal
    q.pop();   //delete 15 (front element)
    cout<<"The size of queue is: "<<q.size()<<endl;


    //empty
    if (q.empty())
    {
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"QUeue is not empty."<<endl;
    }

    cout<<"Front element is: "<<q.front()<<endl;
    


    return 0;
}
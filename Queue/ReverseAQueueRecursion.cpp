#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueueRecursion(queue<int>&q){
    //base case
    if (q.empty())
    {
        return;
    }

    //step A
    int temp = q.front();
    q.pop();

    //step B
    reverseQueueRecursion(q);

    //step C
    q.push(temp);
    
}


int main(){
    queue<int>q;

    q.push(3);
    q.push(6);
    q.push(4);
    q.push(23);
    q.push(5);
    q.push(10);

    reverseQueueRecursion(q);

    cout<<"Printing Queue after reversing recursively: "<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;




    //TC--->O(n)
    //SP--->O(n)


    return 0;
}
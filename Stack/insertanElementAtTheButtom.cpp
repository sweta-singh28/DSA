#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s, int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s, target);

    //backtrack
    s.push(temp);


}

int main(){
    stack<int>s;
    int target = 70;

    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    insertAtBottom(s, target);

    if(s.empty()){
        cout<<"Stack is empty cant insert"<<endl;
    }



    cout<<"Printing the stack"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    





;    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int &target){
    //base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s, target);

    //backtracking
    s.push(topElement);
    

}


void reverseStack(stack<int>& s){
    //base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    //recursive call to reverse stack
    reverseStack(s);

    //insertAtBottom
    insertAtBottom(s, target);


}




int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    if(s.empty()){
        cout<<"Stack is empty. Cant insert at bottom"<<endl;
    }

   


    reverseStack(s);

    cout<<"Printing the reversed stack."<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }





    return 0;
}
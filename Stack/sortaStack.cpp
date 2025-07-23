#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&st, int target){
    //base case
    //stack is empty
    if(st.empty()){
        st.push(target);
        return;
    }

    //check the correct position to insert target
    if(st.top() >= target){
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    //recursive call
    insertSorted(st, target);

    //backtrack
    st.push(temp);

}

void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }

    int topElement = st.top();
    st.pop();

    //recursive call 
    sortStack(st);

    //recursive call for insertSorted
    insertSorted(st, topElement);

}


int main(){
    stack<int>st;
    st.push(10);
    st.push(5);
    st.push(89);
    st.push(2);
    st.push(90);
    st.push(0);

    cout<<"Printing the sorted stack"<<endl;
    sortStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;



    



    return 0;
}
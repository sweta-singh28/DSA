#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(50);
    st.push(30);

    //remove
    st.pop();

    //check the element on top
    cout<<"Element on top is: "<<st.top()<<endl;
 
    //check the size of stack
    cout<<"Size of stack is: "<<st.size()<<endl;

    //stack is empty or not
    if (st.empty())
    {
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."<<endl;
    }
    



    return 0;
}

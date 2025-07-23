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
    st.push(40);
    st.push(555);
    st.push(90);


    //printing the stack
    cout<<"Printing the stack: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


    //remove 90 from the top
    st.pop();
    //remove 555 from the top
    st.pop();

    //check the element on top 40
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

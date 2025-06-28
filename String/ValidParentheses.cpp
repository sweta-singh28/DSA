#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool isValid(string s) {
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){  //opening bracket
            st.push(s[i]);
        }

        else{
            //closing bracket
            if(st.size() == 0){
                return false;
            }
            if(st.top() == '{' && s[i] == '}' || 
               st.top() == '[' && s[i] == ']' ||
               st.top() == '(' && s[i] == ')'){
                st.pop();
               }

               else{ //no match
                return false;
               }
        }
    }
    return st.empty(); //if stack is empty 
    
}


int main(){
    string s = "()[]{}";
    if(isValid(s) != 1){
        cout<<"Invalid parenthesis"<<endl;
    }
    else{
        cout<<"Valid Parenthesis"<<endl;
    }

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
bool parenthesesChecker(string &s, stack<char>&st){
    for(int i=0; i<s.length(); i++){
        //for opening bracket
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }
        else{
            //for closing bracket
            if(st.size() == 0){
                return false;
            }
            if(st.top() == '{' && s[i] == '}' 
            || st.top() == '(' && s[i] == ')' 
            || st.top() == '[' && s[i] == ']' ){
                st.pop();
            }
            else{
                //no matching
                return false;
            }
        }

    }
    return st.empty();
    

}



int main(){
    string s = "({[]})";

    stack<char>st;
    
    parenthesesChecker(s, st);

    if(!parenthesesChecker(s, st)){
        cout<<"Not a valid Parentheses"<<endl;
    }
    else{
        cout<<"Valid Parentheses"<<endl;
    }



    return 0;
}
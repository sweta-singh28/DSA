#include<iostream>
#include<stack>
using namespace std;
int lengthofLongestValidParentheses(string &s, stack<int>&st){
    int maxLen = 0;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(s[i] == '('){
            //open bracket
            //if it is a open bracket then push index in stack
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                //if stack is empty then push current index
                st.push(i);
            }
            else{
                //if stack is not empty then count length
                int len = i - st.top();
                //find the maximum length nd store it in maxLen
                maxLen = max(len, maxLen);
            }
        }
    }
    return maxLen;


}

int main(){

    string s = ")()())";
    stack<int>st;
    st.push(-1);

    int finalAns = lengthofLongestValidParentheses(s, st);
    cout<<"The length of longest valid parentheses is: "<<finalAns<<endl;


    return 0;
}
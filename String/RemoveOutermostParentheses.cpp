#include<iostream>
#include<string.h>
using namespace std;
string RemoveOutermostParentheses(string s){
    string ans = "";
    int count = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            if(count>0){
                ans += s[i];
            }
            count++;
        }
        else{
            count--;
            if(count>0){
                ans += s[i];
            }
        }
    }
    return ans;
}

int main(){
    string s = "(()())(())";

    cout<<"Answer is: "<<RemoveOutermostParentheses(s)<<endl;
    
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

int countReversal(string &s, stack<char>st){
    //if the size of the string is odd then its impossible to balance the string nd count reversal required to balance
        if(s.size() % 2 != 0){
            return -1;
        }
        
        int countReversal = 0;
        
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            //opening bracket
            if(ch == '{'){
                st.push(ch);
            }
            else{
                //closing bracket
                if(!st.empty() && st.top() == '{'){
                    //pop the bracket as it got its pair
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        
        //if stack is non empty then lets count reversal
        while(!st.empty()){
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            
            if(a == b){
                countReversal+=1;
            }
            else{
                countReversal+=2;
            }

        }
        
        return countReversal;

}

int main(){
    string s = "}{{}}{{{";
    stack<char>st;

    int finalAns = countReversal(s, st);
    cout<<"Answer is: "<<finalAns<<endl;

    return 0;
}
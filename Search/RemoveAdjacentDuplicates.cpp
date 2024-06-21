#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string removeDuplicateString(string s){
    string ans = "";
   
    for(int i=0; i<s.size(); i++){
        if(ans.length()>0 && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}



int main(){
    string s = "abbaca";
    
    cout<<"The ans is: "<<removeDuplicateString(s);
    
    return 0;
}
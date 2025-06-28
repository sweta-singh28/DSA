#include<iostream>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    int n = s.length();
    string word = "";
    string ans = "";

    reverse(s.begin(), s.end()); 

    for(int i = 0; i <= n; i++){
        if(i < n && s[i] != ' '){
            word += s[i]; 
        } 
        else if(!word.empty()){
            reverse(word.begin(), word.end()); 
            if(!ans.empty())
             ans += " ";
            ans += word;
            word = ""; 
        }
    }

    return ans;
}

int main(){
    string s = "the sky is blue";
    string finalAns = reverseWord(s);
    cout << finalAns << endl;
    return 0;
}

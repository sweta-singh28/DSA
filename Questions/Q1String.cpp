#include<iostream>
#include<string>
using namespace std;

string removeVowels(string &s){
    string ans = "";

    for(int i=0; i<s.length(); i++){
        if(s[i] != 'a' && s[i] != 'A' && s[i] != 'I' && s[i] != 'i' && s[i] != 'o' &&   s[i] != 'O' && s[i] != 'e' && s[i] != 'E' && s[i] != 'U' && s[i] != 'u' ){
           ans.push_back(s[i]);
        }
    }

    return ans;
}



int main(){
    string s;
    getline(cin, s);

    string ans = removeVowels(s);
    cout<<"Answer is: "<<ans;
    
}
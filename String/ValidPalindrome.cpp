#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}
bool validPalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<=j){
        if(s[i] != s[j]){
            //remove either i or j
            return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        }
        else{
            //s[i] == s[j]
            i++;
            j--;
        }
    }
    return true;
    
}



int main(){
    //Valid palindrome
    string s = "aba";
    
    cout<<validPalindrome(s)<<endl;
    
    
    
    
    return 0;
}
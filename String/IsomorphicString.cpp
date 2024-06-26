#include<iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; // mapping of each char of lang. 's' to lang. 't'
        bool istcharmapped[256] = {0};//stores if t[i] char already mapped with s  [i]

        for(int i=0; i<s.length(); i++){
            if(hash[s[i]] == 0 && istcharmapped[t[i]] ==0){
                hash[s[i]] = t[i];
                istcharmapped[t[i]] = true;
            } 
        }
        for(int i=0; i<s.size(); i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }

int main(){
    return 0;
}
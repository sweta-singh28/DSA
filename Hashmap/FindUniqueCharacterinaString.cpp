#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
//find the first non-repeating character in it and return its index. If it does not exist, return -1
int main(){
    string s = "loveleetcode";
    map<char, int>freq;
    

    //count frequency
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        freq[ch]++;
    }

    for(int i=0; i<s.length(); i++){
        if(freq[s[i]] == 1){
            cout<< i<<endl;
            break;
        }
        
    }

    return -1;

    return 0;
}
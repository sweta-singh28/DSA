#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    string s = "abcd";
    string t = "abcde";

    map<char, int>freqS;
    map<char, int>freqT;

    //count the frequency the s string
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        freqS[ch]++;
    }

    //count the frequency of t string
    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        freqT[ch]++;
    }


    //comparision
    for(auto i:freqT){
        if(freqS[i.first] != i.second){
            cout<<i.first<<endl;
        }
    }

    return 0;
}
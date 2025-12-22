#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s = "Thiruvananthapuram";

    unordered_map<char, int>freq;
    //count frequency
    for(int i =0; i<s.length(); i++){
        char ch = s[i];
        freq[ch]++;
    }

    for(auto i: freq){
        cout<<i.first<<" "<<i.second<<endl;
    }
    



    return 0;
}
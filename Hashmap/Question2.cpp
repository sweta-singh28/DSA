#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;


int main(){
    string str = "swwetasingghhhh";
    map<char, int>freq;

    //count frequency
    for(int i=0; i<str.length(); i++){
        char temp = str[i];
        freq[temp]++;
    }

    //print all the characters
    for(auto i: freq){
        cout<<i.first<<" "<<i.second<<endl;

    }
    return 0;
}
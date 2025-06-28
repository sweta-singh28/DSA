#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s = "504";
    for(int i=s.length(); i>=0; i--){
        if(s[i]%2 != 0){
            string ans = s.substr(0, i+1);
            cout<< ans<<endl;;
        }
    }
    return 0;
}
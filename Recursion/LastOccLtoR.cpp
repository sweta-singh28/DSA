#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//Left to right

void findLastOccLR(string &s, char x, int i, int &ans){
    //base case
    if(i >= s.size()){
        return;
    }
    
    //solve1 case
    if(s[i] == x){
        ans = i;
    }
    
    //RE
    findLastOccLR(s,x,i+1,ans);
}

int main() {
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;
    
    char x;
    cout<<"Enter the character you are searching: "<<endl;
    cin>>x;
    
    int i = 0;
    int ans = -1;
    
    findLastOccLR(s, x, i,ans);
    cout<<ans<<endl;
    
    return 0;
}
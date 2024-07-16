#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//Right to left 

void findLastOccRL(string &s, char x, int i, int &ans){
    //base case
    if(i<0){
        return;
    }
    
    //solve 1 case
    if(s[i] == x){
        ans = i;
        return; //return because we already got the index(ans)
    }
    
    findLastOccRL(s,x,i-1,ans);
}


int main() {
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;
    
    char x;
    cout<<"Enter the character: "<<endl;
    cin>>x;
    
    //int i=0;   //i = n-1 (n= size of string)
    int ans = -1;
    
    findLastOccRL(s, x, s.size()-1, ans); // i = s.size()-1 --> cause a it starts from the last
    cout<<"The answer is at index: "<<ans<<endl;
    
    
   
  
    
    return 0;
}
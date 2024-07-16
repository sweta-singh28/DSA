#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void reverseString(string& s, int start, int end){
    //base case
    if(start>=end){
        return;
    }
    
    //solve one case
    swap(s[start], s[end]);
    
    //recursive call
    reverseString(s, start+1, end-1);
}

int main() {
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;
    
    int start = 0;
    int end = s.size() - 1;
    
    reverseString(s, start, end);
    
    cout<<"The reversed string is: "<<s<<endl;
   
    return 0;
}
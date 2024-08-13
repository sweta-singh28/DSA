#include <iostream>
#include<limits.h>
using namespace std;
void reverseString(string& word, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    
    //solve 1 case
    swap(word[s], word[e]);
    
    
    //RR
    reverseString(word, s+1, e-1);
}


    
int main() {
   string word;
   cout<<"Enter string: "<<endl;
   cin>>word;
   
   int s = 0;
   int e = word.size()-1;
   
   reverseString(word, s, e);
   cout<<word<<endl;

    return 0;
}
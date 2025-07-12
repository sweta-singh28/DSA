#include <iostream>
using namespace std;
//BackTracking 
//Print all the possible combination of abc

void printPermutation(string& str, int i){
                     //pass by reference
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return ; 
    }
    
    //swapping 
    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);
        //Recursion call
        printPermutation(str, i+1);
        
    //Backtrcaking ----> To recreate the original input string
        swap(str[i], str[j]);
    }
}

int main() {
    string str = "abc";
    int i = 0;
    
    printPermutation(str, i);
    
    

    return 0;
}
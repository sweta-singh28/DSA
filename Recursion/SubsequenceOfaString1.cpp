#include <iostream>
#include<vector>
using namespace std;
//store in vector

void printSubsequences(string str, string output, int i, int n,vector<string>&v){
    //base case
    if(i >= n){
        //store in vector
        v.push_back(output);
        return;
    }
    
    //exclude
    printSubsequences(str, output, i+1,n,v);
    

    //include 
    output = output + str[i]; //include the substring in output array 
    printSubsequences(str, output, i+1,n,v);
}


int main() {
    string str = "abc";
    string output = "";
    vector<string>v;
    int n = str.length();
    
    
    int i = 0;
    
    
    printSubsequences(str, output, i,n,v);
    
    cout<<"Printing all the subsequences: "<<endl;
    for(auto val: v){
        cout<<val<<" ";
    }
    
    
    cout<<endl;
    //printing the length 
    cout<<"Size of vector: "<<v.size()<<endl;
   

    return 0;
}
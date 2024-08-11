#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
//find all occ

void getKey(string name, int& n, int i, int key, vector<int>&ans){
    //base case                                  //reference variable
    if(i>=n){
        return;
    }
    
    //solve 1 case
    if(name[i] == key){
        ans.push_back(i);
    }
    
    return getKey(name, n, i+1, key, ans);
}


int main() {
    
 string name = "rohitsingh";
 int n = name.length();
 int i = 0;
 int key = 'i';
 
 //to store all the index
 vector<int>ans;
 
 
 getKey(name, n, i, key, ans);
 
 
 //printing the answer
 cout<<"Printing the answer: "<<endl;
 for(auto val: ans){
    cout<<val<<" ";
 }
 cout<<endl;
   
    
    return 0;
}
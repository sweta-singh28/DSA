#include <iostream>
#include<limits.h>
using namespace std;
//find index of occ

void checkKey(string str, int& n, int i, char key){
    //base case
    if(i>=n){
        //key is not found
        return;
    }
    
    //solve 1 case
    if(str[i] == key){
        cout<<"Key is found at index: "<<i<<endl;
    }
    
    //calling function recursively to handle other cases
    return checkKey(str, n, i+1, key);
    
}

int main() {
    
   string str = "rohitsingh";
   int n = str.length();
   int i=0; 
   char key = 'i';
   
   checkKey(str, n, i, key);
   
   
    
    return 0;
}
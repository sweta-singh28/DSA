#include <iostream>
#include<limits.h>
using namespace std;
//check if present or not

bool checkKey(string str, int n, int i, char key){
    //base case
    if(i>=n){
        return false;
    }
    
    //solve 1 case
    if(str[i] == key){
        return true;
    }
    
    //calling function recursively to handle other cases
    return checkKey(str, n, i+1, key);
    
}

int main() {
    
   string str = "rohitsingh";
   int n = str.length();
   int i=0; 
   char key = 'z';
   
   bool ans = checkKey(str, n, i, key);
   if(ans == 0){
       cout<<"The key is absent."<<endl;
   }
   else{
       cout<<"key is present."<<endl;
   }
   
   
    
    return 0;
}
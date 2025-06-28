#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    
    for(int i=0; i<a.length(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
    
}



int main(){


    //comparision of two string
    //(a.compare(b) ->returns 0 if two string are exactly equal
    
    string a = "swetaaa";
    string b = "singhhh";
    
    if(compareString(a, b) == false){
        cout<<"Both the strings are not exactly sane.";
    }
    else{
        cout<<"Both the string are exactly same";
    }
    



    
    return 0;
}
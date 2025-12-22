#include<iostream>
using namespace std;
int findLength(string&s){
    int count=0; 
    int i = 0;
    while(s[i] != '\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    string s = "swetaBhai";
    
    cout<<"Length: "<<findLength(s)<<endl;

    return 0;
}
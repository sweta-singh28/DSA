#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

void countKey(string& str, int& n,int i,char& key, int& count){
    //base case
    if(i>=n){
        return;
    }
    if(str[i] == key){
        count++;
    }
    return countKey(str, n, i+1, key, count);
}


int main() {
    string str = "swetasingh";
    int n = str.length();
    int i = 0;
    char key = 's';
    int count = 0;
    
    countKey(str, n, i, key, count);
    cout<<"The answer is "<<count<<endl;

    return 0;
}
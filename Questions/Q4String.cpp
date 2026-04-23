#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "My name is swetaaaaaa";
    string word = "iiii";

    
    s.replace(15, 6, word);

    cout<<s<<endl;


    return 0;
}
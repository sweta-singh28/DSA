#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAlphabet(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string reverseLetters(string s){
    int i = 0; 
    int j = s.length() - 1;
    
    while(i < j){
        if(isAlphabet(s[i]) && isAlphabet(s[j])){
            swap(s[i], s[j]);
            i++;
            j--;
        } else {
            if(!isAlphabet(s[i])) {
                i++;
            }
            if(!isAlphabet(s[j])) {
                j--;
            }
        }
    }
    return s;
}

int main(){
    string s = "a-bC-dEf-ghIj";
    cout << "The ans is: " << reverseLetters(s) << endl;
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool validAnagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if(s==t){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    string s = "Anagram";
    string t = "nagaram";

    cout<<"The ans is: "<<validAnagram(s,t)<<endl;

    
    return 0;
}
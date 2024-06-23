#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//T.C-> O(nlogn)
bool validAnagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if(s==t){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    string s = "Anagram";
    string t = "nagaram";

    if(validAnagram(s,t) == 1){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not an Anagram"<<endl;
    }
    return 0;
}
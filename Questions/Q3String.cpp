#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string removeSpaces(string& s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            s.erase(i, 1);
            i--;
        }
    }
    return s;

}

int main(){
    string s;
    getline(cin, s);


    removeSpaces(s);
    cout<<s<<endl;

    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
string printSubstring(string s){
    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            cout << s.substr(i, j - i + 1) << endl;

        }
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;

    printSubstring(s);

    return 0;
}
#include<iostream>
using namespace std;
void eraseString(string&s, int position, int length){
    int n = s.length();
    //check valid position bhai
    if(position <= 0 || position > s.length() || length <0){
        return;
    }

    for(int i=position; i+length<n; i++){
        s[i] = s[i+1];
    }

    s.resize(n-length);

}

int main(){
    string s = "SwetaSingh";
    int n = s.length();
    eraseString(s, 5, 5);
    cout<<"New string is: "<<s<<endl;



    return 0;
}
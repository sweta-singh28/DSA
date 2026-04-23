#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string &s){
     int i = 0; 
    int j = s.length()-1;

    while(i<j){
        if(s[i] != s[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;

}


int main(){
    string s;
    cin>>s;
    

   bool ans = checkPalindrome(s);

   cout<<ans<<endl;



    return 0;
}
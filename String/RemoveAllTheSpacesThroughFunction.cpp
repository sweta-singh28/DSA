#include<iostream>
#include<cstring>
#include<string>
using namespace std;

string removeAllSpaces(string input){
    string ans = "";
    for (int i = 0; i < input.length(); i++)
    {
        if(isalnum(input[i])){
            ans += input[i];
        }
    }
    return ans;

}


int main(){
    string input = " swetaa studied for 5 hrs yesterday";
    string finalAns = removeAllSpaces(input);
    cout<<finalAns<<endl;



    return 0;
}
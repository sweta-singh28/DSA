#include <iostream>
#include<string>
using namespace std;
void removeAllOccofSubstr(string &s, string &part){
  int found = s.find(part);
  if(found != string::npos){
    //part string has been located
    //please remove it
    string leftPart = s.substr(0, found);
    string rightPart = s.substr(found+part.size(), s.size());
    s = leftPart + rightPart;

    //RE Call
    removeAllOccofSubstr(s, part);
  }

  else{
    //base case
    //all the occurence of part has been removed from string s
    
    return;
  }
}

int main() {
  string s =  "daabcbaabcbc";
  string part = "abc";
  removeAllOccofSubstr(s, part);
  cout<<s<<endl;


  return 0;
}
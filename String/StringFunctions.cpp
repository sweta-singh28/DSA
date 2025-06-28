#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    //string create
    string str;
    //input
    cin>>str;
    //output
    //to take space as an input
    //getline(cin, str);
    //cout<<str<<endl;
    
    //returns the length of string
    cout<<"Length is: "<<str.length()<<endl;
    
    //check if string is empty or not
    cout<<"isEmpty: "<<str.empty()<<endl;
    
    //to insert a char at the end
    str.push_back('A');
    cout<<str<<endl;
    
    //pop()
    str.pop_back();
    cout<<str<<endl;
    
    //to find substring    (vvimpt)
    cout<<str.substr(0,6)<<endl;

    //returns the index of target find()
    string sentence = "My name is sweta singh";
    string target = "sweta";
    cout<<sentence.find(target)<<endl;
    
    //replce()
    string str1 = "My name is sweta";
    string word = "your";
    str1.replace(0,2,word);
    cout<<str1<<endl;
    
    //erase()
    string str2= "AEJNCUIHNCBVIUCBCRC";
    str2.erase(0, 4);
    cout<<str;

    
    return 0;
}
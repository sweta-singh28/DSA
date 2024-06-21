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
    
    //comparision of two string
    //(a.compare(b) ->returns 0 if two string are excatly equal
    string a = "swetaaa";
    string b = "singhhhh";
    
    if(a.compare(b) == 0){
        cout<<"a and b is exactly same strings."<<endl;
    }
    else{
        cout<<"a and b are not same."<<endl;
    }
    
    
    
    
   

    
    return 0;
}
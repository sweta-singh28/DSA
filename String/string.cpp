#include<iostream>
#include<string>
using namespace std;
int main(){
     //string create
    string str;
    //input
    //cin>>str;
    //cout<<str<<endl;

    //output
    //to take space as an input

    getline(cin, str);
    cout<<str<<endl;

    cout<<"Length: "<<str.length()<<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(1,4)<<endl;
    cout<<str<<endl;



    return 0;
}
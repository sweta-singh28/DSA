#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a;
    cout<<"Enter the first string: "<<endl;
    cin>>a;

    string b;
    cout<<"Enter the second string: "<<endl;
    cin>>b;

    //compare is a function which compare two strings
    //0---> same string
    //1---> different strings

    if(a.compare(b) == 0){
        cout<<"a and b are exactly same strings"<<endl;
    }
    else{
        cout<<"a and b are not same"<<endl;
    }






    return 0;
}
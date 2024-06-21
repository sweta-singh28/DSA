#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    char name[100];
    //taking the entire char sequence as an input
    cout<<"Enter your name: "<<endl;
    cin>>name;
    
    cout<<"Your name is "<<name<<endl;


    //taking single input
    char ch[100];

    ch[0] = 's';
    ch[1] = 'w';
    ch[2] = 'e';
    ch[3] = 't';
    cin>>ch[4];

    cout<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<ch[4];


    return 0;
}
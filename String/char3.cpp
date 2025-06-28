#include <iostream>
using namespace std;

int main() {
    // char ch[100];
    // cout<<"Enter your name: "<<endl;
    // cin>>ch;
    // cout<<"Your name: "<<ch<<endl;
    
    
    char name[100];
    cin>>name;
    
    for(int i=0; i<6; i++){
        cout<<"index: "<<i<<" value: "<<name[i]<<endl;
    }

    return 0;
}
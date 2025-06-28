#include <iostream>
#include<string.h>
#include<cstring>
using namespace std;
//reverse a string
string removeSpace(char name[100]){
    int i = 0;
    while(i<strlen(name)){
        if(name[i] == ' '){
            name[i] = '@';
        }
        i++;
        
    }
    return name;
    
    
    
}
    


int main() {
    char name[100];
    cout<<"Enter your full name: "<<endl;
    cin.getline(name, 100);
    
    cout<<"Before removing space: "<<name<<endl;
    removeSpace(name);
    
    cout<<"After removing space: "<<name<<endl;
    
    
    
    return 0;
}
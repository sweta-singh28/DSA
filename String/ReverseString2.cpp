#include <iostream>
#include<string.h>
#include<cstring>
using namespace std;
//reverse a string
string reverseString(char name[100]){
    int n = strlen(name);
    int i=0;
    int j = n-1;
    
    while(i<j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
    return name;
}


int main() {
    char name[100];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    
    cout<<"Before reversing: "<<name<<endl;
    reverseString(name);
    cout<<"After reversing: "<<name<<endl;
    
    
    
    return 0;
}
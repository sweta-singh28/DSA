#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int reverseString(char name[]){
    int n = strlen(name);
    int i = 0;
    int j = n-1;
    
    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
    
    //usig for loop
    for(; i<=j;){
        swap(name[i], name[j]);
        i++;
        j--;
        
    }
    
    
    
    
    
    return -1;
}

int main(){
    //Reverse string (using swapping)
    char name[100];
    cout<<"Enter name: "<<endl;
    cin>>name;
    
    cout<<"Initially: "<<name<<endl;
    reverseString(name);
    cout<<"After reversal: "<<name<<endl;
    
    
    return 0;
}
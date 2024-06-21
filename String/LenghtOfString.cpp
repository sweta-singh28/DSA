#include<iostream>
#include <cstring>
#include<string>
using namespace std;
int getLength(char name[]){
    int length = 0;
    int i =0;
    
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    
    char name[100];
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"The length is: "<<getLength(name)<<endl;
    
    //function
    cout<<"Length is: "<<strlen(name)<<endl;
    
    
    return 0;
}
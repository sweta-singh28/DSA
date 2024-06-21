#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool convertinUpperCase(char arr[]){
    int n  = strlen(arr);
    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A';
        return true;
    }
    return false;
}



int main(){
    //Convert in upper case
    
    char arr[50];
    cout<<"Enter word: "<<endl;
    cin>>arr;
    
    char ans = convertinUpperCase(arr);
    cout<<ans<<endl;
    
   
    

    
    return 0;
}
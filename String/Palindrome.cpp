#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int isPalindrome(char word[]){
    int n = strlen(word);
    int i = 0;
    int j = n-1;
    
    while(i<j){
        if(word[i] != word[j]){
            return -1;
        }
        i++;
        j--;
    }

    return 0;
}




int main(){
    //Palindrome
    char word[100];
    cout<<"Enter word: "<<endl;
    cin>>word;
    
    
    int ans = isPalindrome(word);
    
    if(ans == -1 ){
        cout<<"Not Palindrome."<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }
    
    

    
    return 0;
}
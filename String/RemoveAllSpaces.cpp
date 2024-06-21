#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void removeSpace(char sentence[]){
    int n = strlen(sentence);
    int i = 0;
    while(i<n){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
        i++;
    }
}




int main(){
    
    char sentence[100];
    cout<<"Enter Sentence: "<<endl;
    cin.getline(sentence, 100);
    
    
    removeSpace(sentence);
    cout<<"After removing space: "<<sentence<<endl;

    
    

    
    return 0;
}
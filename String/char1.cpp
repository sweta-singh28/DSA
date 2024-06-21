#include<iostream>
#include<string>
using namespace std;
int main(){
    char name[100];
    cin>>name;

    for(int i=0; i<7; i++){
        cout<<"Index:- "<<i<<" Value:- "<<name[i]<<endl;
    }
    

    //verification of null character 
    int value = int(name[6]);
    cout<<"value is: "<<value<<endl;



    return 0;
}
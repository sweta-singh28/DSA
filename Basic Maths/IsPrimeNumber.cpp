#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        } 

    }

    if(count == 2){
        cout<<"Prime Number."<<endl;
    }
    else{
        cout<<"Not a prime Number."<<endl;
    }



    return 0;
}
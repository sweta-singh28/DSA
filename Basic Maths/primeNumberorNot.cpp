#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int count = 0;

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        cout<<"Prime No."<<endl;
    }
    else{
        cout<<"Not a prime No."<<endl;
    }

    return 0;
}
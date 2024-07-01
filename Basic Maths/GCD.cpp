//Euclids algorithm
//TC-> O(log(min(a,b)))
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a>0 && b>0){
        if(a>b){
            a = a-b;
        }
        else{
            b= b-a;
        }
    }

    if(a==0){
        return b;
    }
    else{
        return a;
    }





}
int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    
    int ans = gcd(a,b);
    cout<<"The GCD is: "<<ans<<endl;



    return 0;
}
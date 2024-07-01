//lcm - a*b/gcd
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
    int LCM = (a*b)/ans;
    cout<<"The LCM is: "<<LCM<<endl;



    return 0;
}
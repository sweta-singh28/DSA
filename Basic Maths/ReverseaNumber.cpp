#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int revNum = 0;

    while(n>0){
        int lastDigit = n%10;
        

        revNum = (revNum * 10) + lastDigit;
        n = n/10;
    }

    cout<<"The reversed number is: "<<revNum<<endl;


    return 0;
}
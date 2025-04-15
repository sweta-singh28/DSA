#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int revNum = 0;

    int dup = n;

    while(n > 0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n /=  10;

    }

    if(revNum == dup){
        cout<<"The number is palindromic."<<endl;
    }
    else{
        cout<<"The number is not palindromic."<<endl;
    }





    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

    int digit = 0;
    int rev = 0;

    while(n != 0){
        digit = n%10;
        rev = (rev*10) + digit;
        n = n/10;
    }

    cout<<"Reversed Number is: "<<rev<<endl;

    

    return 0;
}
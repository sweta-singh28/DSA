#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
void printDigits(int n){
    //base case
    if(n==0){
        return;
    }
    
    //function call (recursive relation)
    printDigits(n/10);
    
    //solve 1 case
    int digits = n%10;
    cout<<digits<<" "<<endl;
    
}



int main() {
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    
    if(n == 0){
        cout<<0<<endl;
    }
    
    printDigits(n);
    
   

    return 0;
}
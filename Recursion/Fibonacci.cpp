#include <iostream>
using namespace std;
//n is 1 & 2 cause we want to print the series from  0.
int fib(int n){
    //base case
    if(n==1){ 
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fib(n-1) + fib(n-2);
    return ans;
}


int main() {
    int n;
    cout<<"Enter the term you want to see: "<<endl;
    cin>>n;
    
    int ans = fib(n);
    cout<<"The "<<n<<"th term is: "<<ans<<endl;

    return 0;
}
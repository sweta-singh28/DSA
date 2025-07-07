#include <iostream>
using namespace std;
// print fibonacci series using recursion
int fib(int n){
    //base case
    if(n == 0){
        return 0;
    } 
    if(n == 1){
        return 1;
    }
    
    
    return fib(n-1) + fib(n-2);
}

void printfibseries(int n){
    for(int i=0; i<n; i++){
        cout<<fib(i)<<" ";
    }
}



int main() {
    int n;
    cout<<"Enter the term you want to see: "<<endl;
    cin>>n;
    
    cout<<"Fibonacci series is: "<<endl;
    printfibseries(n);
    
   
    


    return 0;
}
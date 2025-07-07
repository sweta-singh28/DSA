#include<iostream>
using namespace std;
//print fibonacci series.
int fibonacci(int n){
    //base case
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
  
   
}


int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    //print the series
    for(int i=0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }

    
   
    return 0;
}
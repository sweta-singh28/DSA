#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int>&dp){
    //base case
    if(n <= 1){
        return n;
    }

    //step 3: check if ans is already available or not 
    if(dp[n] != -1){
        return dp[n];
    }

    //step 2: 
    //store ans
    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];

}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    //step 1: create dp array
    vector<int>dp(n+1);
    for(int i=0; i<dp.size(); i++){
        dp[i] = -1;
    }

    cout<<"Answer is: "<<fib(n, dp)<<endl;

    return 0;
}
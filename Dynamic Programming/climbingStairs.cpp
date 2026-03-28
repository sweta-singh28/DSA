#include<iostream>
#include<vector>
using namespace std;
int solve(int n, vector<int>&dp){
    //base case
    if( n == 0 || n == 1){
        return 1;
    }

    //step 3:
    //check if ans is available
    if(dp[n] != -1){
        return dp[n];
    }


    //step 2:
    dp[n] = solve(n-1, dp) + solve(n-2, dp);
    return dp[n];


}



int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    //step 1:
    vector<int>dp(n+1);

    for(int i=0; i<dp.size(); i++){
        dp[i] = -1;
    }

    cout<<"Answer is: " <<solve(n, dp);



    return 0;
}
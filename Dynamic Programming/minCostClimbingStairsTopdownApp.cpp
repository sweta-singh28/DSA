#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>cost, int n, vector<int>& dp){
    //base case
    if(n == 0){
        return cost[0];
    }
    if(n == 1){
        return cost[1];
    }

    //step 2: check if ans is availabe
    if(dp[n] != -1){
        return dp[n];
    }


    //step 2: store the ans
    dp[n] =  cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));
    return dp[n];
}

int main(){
    vector<int>cost = {10,15,20};
    int n = cost.size();

    //step 1:

    vector<int>dp(n+1, -1);



    int ans = min(solve(cost, n-1, dp), solve(cost, n-2, dp));

    cout<<"Answer is: "<<ans<<endl;

    
    return 0;
}
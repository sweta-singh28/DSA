#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>cost = {10,15,20};
    int n = cost.size();

    //step 1:

    vector<int>dp(n+1, -1);

    //step2:
    dp[0] = cost[0];
    dp[1] = cost[1];

    //step 2:
    for(int i=2; i<=n; i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }


    cout<<min(dp[n-1], dp[n-2]);

   
    
    return 0;
}
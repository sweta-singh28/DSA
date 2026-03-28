#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>cost, int n){
    //base case
    if(n == 0){
        return cost[0];
    }
    if(n == 1){
        return cost[1];
    }


    //sum of current element nd min of n-1 nd ni2
    return cost[n] + min(solve(cost, n-1), solve(cost, n-2));
}

int main(){
    vector<int>cost = {10,15,20};
    int n = cost.size();

    int ans = min(solve(cost, n-1), solve(cost, n-2));

    cout<<"Answer is: "<<ans<<endl;

    
    return 0;
}
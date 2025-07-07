#include<iostream>
#include<vector>
#include<climits>
#include<limits.h>
//you have to tell the minimum number of elements required to reach target sum
using namespace std;
int solve(vector<int>arr, int target){
    //base case
    //if target is 0
    if(target == 0){
        return 0;
    }
    //if target is smaller than 0
    if(target < 0){
        return INT_MAX;
    }

    //lets solve 1 case
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = solve(arr, target-arr[i]);
        if(ans != INT_MAX)
        mini = min(mini, ans+1);
    }

    return mini;





}

int main(){
    vector<int>arr{1,2};
    int target = 5;

    int ans = solve(arr, target);
    cout<<"Answer: "<<ans<<endl;



    return 0;
}
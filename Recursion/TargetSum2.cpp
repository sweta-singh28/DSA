#include<iostream>
#include<vector>
#include<climits>
#include<limits.h>
using namespace std;
int targetSum(vector<int>arr, int target){
    //base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }

    //solve 1 case
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = targetSum(arr, target-arr[i]);
        if(ans != INT_MAX){
            mini = min(ans+1, mini);
        }
    }
    return mini;

}

int main(){
    vector<int>arr{1,2,3};   //unlimited 
    int target = 5;

    int ans = targetSum(arr, target);
    cout<<"Answers is: "<<ans<<endl;


    return 0;
}
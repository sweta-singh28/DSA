#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>cost = {10,15,20};
    int n = cost.size();

    
    //step1:
    int prev2 = cost[0];
    int prev1 = cost[1];

    //step 2:
    for(int i=2; i<n; i++){
        int curr = cost[i] + min(prev1 , prev2);
        prev2 = prev1;
        prev1 = curr;
    }


    cout<<min(prev1, prev2);

   
    
    return 0;
}
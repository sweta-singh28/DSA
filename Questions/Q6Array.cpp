#include<iostream>
#include<vector>
#include<climits>
#include<limits>
using namespace std;

vector<int>miniAndSecondMini(vector<int>&arr){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    //find 1st smallest
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    //find second smallest
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }

    if(smallest == INT_MAX || secondSmallest == INT_MAX){
        return {-1};
    }
    else{
        return {smallest, secondSmallest};
    }

}

int main(){
    vector<int>arr = {2, 4, 3, 5, 6};

    vector<int>ans = miniAndSecondMini(arr);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }






    return 0;
}
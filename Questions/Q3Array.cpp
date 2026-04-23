#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int>&arr){
    //find total Sum
    int totalSum = 0;
    for(int i=0; i<arr.size(); i++){
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i=0; i<arr.size(); i++){
        int rightSum = totalSum - leftSum -arr[i];

        if(rightSum == leftSum){
            return true;
        }

        leftSum += arr[i];
    }


    return false;


}

int main(){
    vector<int>arr = {1, 2, 3, 3};

    cout<<solve(arr)<<endl;


    return 0;
}
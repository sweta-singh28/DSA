#include<iostream>
#include<vector>
using namespace std;
//using summation method

int findMissingNumber(vector<int>arr, int n){
    int sum = (n+1) * (n+2) /2;

    int sum2 = 0;
    for(int i=0; i<arr.size(); i++){
        sum2 += arr[i];
    }

    int missingNumber = sum - sum2;
    return missingNumber;



}


int main(){
    vector<int>arr{1,2,3,5};
    int n = 4;

    int ans = findMissingNumber(arr,n);
    cout<<"The missing number is: "<<ans<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
bool isPossibleSol(vector<int>&arr, int k, int n, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<arr.size(); i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > k || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main(){
    vector<int>arr = {12, 34, 67, 90};
    int n = 4;
    int ans = -1;
    int sum = 0;
    int start = 0;
    int k = 2;

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }
    int end = sum;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleSol(arr, k, n, mid)){
            ans = mid;
            //search in left side form smaller ans
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    cout<<"The ans is: "<<ans<<endl;



    return 0;
}
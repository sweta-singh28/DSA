#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>&arr, int& n, int& target, int start, int end){
    //base case
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;
    
    //solve 1 case
    if(arr[mid] == target){
        return mid;
    }

    //recursive call to search in left
    if(arr[mid] > target){
        return binarySearch(arr, n, target, start, mid-1);
    }

    //recursive call to search in right
    else{
        return binarySearch(arr, n, target, mid+1, end);
    }


}

int main(){
    vector<int>arr{10,20,30,40,50,60};
    int n = arr.size();
    int target = 60;
    
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    int ans = binarySearch(arr, n, target, start, end);
    cout<<"Answer is: "<<ans<<endl;
    




    return 0;
}
#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
//pass by reference
int binarySearch(vector<int>&arr, int& s, int& e, int target){
    //base case
    //case->1 key not found
    if(s>e){
        return -1;
    }

    
    //case->2  key found
    //solve 1 case
    int mid = s+(e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    
    //arr[mid]<key -> right search
    if(arr[mid]<target){
        int s = mid+1;
    return binarySearch(arr,s, e,target);
    }
    
    //arr[mid]>key -> left search
    else{
        int e = mid-1;
    return binarySearch(arr, s,e, target);
    }
    
    
}


int main() {
    vector<int>arr{10,20,30,80,50,70,90, 99};
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int target = 99;
    
    
    int ans = binarySearch(arr, s, e, target);
    cout<<"The answer is: "<<ans<<endl;
   
   

    return 0;
}
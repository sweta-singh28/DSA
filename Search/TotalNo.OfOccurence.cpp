//find total number of occrence of a target

#include<iostream>
#include<vector>
using namespace std;

int getIndexOfFirst(vector<int>arr, int target){
    
    int start = 0;
    int end = arr.size();
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            //search in left
            end = mid-1;
        }
        else if(arr[mid] > target){
            //search in left
            end = mid-1;
        }
        else{
            //serach in right
            start = mid+1;
        }
        mid = start+(end-start)/2;
        
    }
    return ans;
}

int getIndexOfLast(vector<int>arr, int target){
    
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            //serach in right
            start = mid+1;
        }
        else if(arr[mid] > target){
            //search in left
            end = mid-1;
        }
        else{
            //search in right
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,5,6,6,6,6,6,6,6,8,9};
    int target = 6;
    
    int lastOcc = getIndexOfLast(arr, target);
    int firstOcc = getIndexOfFirst(arr, target);
    
    int totalOcc = lastOcc - firstOcc + 1;
    cout<<"The total number of occ of the element is: "<<totalOcc<<endl;


    
    return 0;
}
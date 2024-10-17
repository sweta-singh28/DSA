#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>&arr, int target, int start, int end){
    
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            //right search
            start = mid+1;
        }
        else{
            //left search
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;

}



int exponentialSearch(vector<int>&arr, int target){
    if(arr[0] == target){
        return 0;
    }
    int i = 1;

    while(i<arr.size() && arr[i] <= target){
        i*=2;

    }

    return binarySearch(arr, target, i / 2, min(i, (int)arr.size() - 1));
}



int main(){
    vector<int>arr = {1, 2, 3, 4, 10, 40, 44, 55, 100};
    int target = 10;

    int finalAns = exponentialSearch(arr, target);

    if (finalAns == -1)
    {
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element found at index: "<<finalAns;
    }

    



    return 0;
}
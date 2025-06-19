#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int searchinRotatedSorted(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        //compare target with mid 
        if(arr[mid] == target){
            return mid;
        }

        //check if left part is sorted
        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target <= arr[mid]){
                end = mid-1;
            }
            else{
                //else right search
                start = mid+1;
            }
        }
        //if right part is sorted the search in right side
        else{
            if(arr[end] >= target && target <= arr[mid]){
                start = mid+1;
            }
            else{
                //else left search
                end = mid-1;
            }
        }
        mid = start+(end-start)/2;



    }
    return -1;
    
}

int main(){
    vector<int>arr{4,5,6,7,0,1,2,3};
    int target = 0;

    int finalAns = searchinRotatedSorted(arr, target);
    cout<<finalAns<<endl;
    return 0;
}

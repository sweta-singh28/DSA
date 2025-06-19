#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool searchinRotatedSortedArray(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        //compare mid with target
        if(arr[mid] == target){
            return true;
        }

        //edge cases
        //(what if start, end and mid is same)
        if(arr[start] == arr[mid] && arr[mid] == arr[end]){
            start = start+1;
            end = end-1;
            continue;
        }

        //check if left part is sorted    (BS on left side)
        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target <= arr[mid]){
                end = mid-1;
            }
            //else right search
            else{
                start = mid+1;
            }
        }
        //check if right part is sorted    (BS on right side)
        else{
            if(arr[mid] <= target && target <= arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
        mid = start+(end-start)/2;


    }
    return false;
    

}

int main(){
    vector<int>arr{3,1,2,3,3,3,3};
    int target = 3;

    bool ans = searchinRotatedSortedArray(arr, target);
    if(ans != 0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }




    return 0;
}
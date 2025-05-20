//first occ.
#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>arr, int x){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<end){
        if(arr[mid] == x){
            ans = mid;
            //search in left side 
            end = mid-1;
        }
        else if(arr[mid] > x){
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
    vector<int>arr{1,2,2,2,2,3,4,5};
    int x = 2;
    int finalAns = lowerBound(arr, x);
    cout<<"The index is: "<<finalAns<<endl;

    return 0;
}
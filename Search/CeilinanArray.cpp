#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findCeil(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    int ans = -1;

    while(start<=end){
        if(arr[mid<=mid]){
            ans = arr[mid];
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }

    return ans;
}
int main(){
    vector<int>arr{3, 4, 4, 7, 8, 10};
    int target = 5;

    int finalAns = findCeil(arr, target);
    cout<<finalAns<<endl;

    return 0;
}
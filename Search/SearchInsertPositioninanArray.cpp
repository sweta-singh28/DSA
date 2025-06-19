#include<iostream>
#include<vector>
using namespace std;
int searchPosition(vector<int>arr, int x){
    int start = 0;
    int end = arr.size()-1;
    //int mid = start+(end-start)/2;

    int ans = arr.size();

    while(start<=end){
        int mid = start+(end-start)/2;
        
        if(arr[mid] == x){
            ans = mid;
            //search smaller index
            end = mid-1;
        }
        else if(arr[mid] > x){
            //search in left
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }

    return ans;
}
int main(){
    vector<int>arr{1,2,4,7};
    int x = 6;

    int finalAns = searchPosition(arr, x);
    cout<<finalAns<<endl;





    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lowerBound(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int ans = arr.size();
        
        while(start<=end){
            
            if(arr[mid] > target){
                ans = mid;
                //search in left
                end = mid-1;
            }
            else if(arr[mid] >target){
                //search in left
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
    vector<int>arr{2, 3, 7, 10, 11, 11, 25};
    int target = 9;

    int finalAns = lowerBound(arr, target);
    cout<<finalAns<<endl;







    return 0;
}
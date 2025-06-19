#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchElement(vector<int>nums, int k){
    int start = 0;
    int end = nums.size()-1;
    int mid = start+(end-start)/2;
    
    while(start<= end){
        if(nums[mid] == k){
            return mid;
        }
        else if(nums[start] < nums[mid]){
            {
                if(nums[start] <= k && k <= nums[mid]){
                    end = mid-1;
                }
            }
            end = mid-1;
        }
        else{
            if(nums[mid] <= k && k<= nums[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        mid = start+(end-start)/2;
    }

    return -1;

}

int main(){
    vector<int>nums{4,5,6,7,0,1,2,3};
    int k = 0;
    int finalAns = searchElement(nums, k);
    cout<<finalAns<<endl;




    return 0;
}
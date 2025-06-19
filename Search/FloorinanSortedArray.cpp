#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findFloor(vector<int>nums, int key){
    int start = 0;
    int end = nums.size()-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(nums[mid] <= key){
            //store ans 
            ans = nums[mid];
            //searching for a larger floor
            start = mid+1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;

    }
    return ans;


}
int main(){
    vector<int>nums{3, 4, 4, 7, 8, 10};
    int key = 5;
    int finalAns = findFloor(nums, key);
    cout<<finalAns<<endl;

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int findPairs(vector<int>nums, int k){
    //sort the array
    sort(nums.begin(), nums.end());
    
   
        int count = 0;
        int i=0;
        int j=0;
        set<pair<int, int> > ans;
        while(j<nums.size()){
            int diff = nums[j] - nums[i];
            if(diff == k){
                ans.insert({nums[i], nums[j]});
                ++i;
                ++j;
            }
            else if(diff<k){
                j++;
            }
            else{
                i++;
            }
            if(i==j)  j++;
        }
        return ans.size();
        
    }

    int main(){

    vector<int>arr{3,1,4,1,5};     
    int k = 2;


    findPairs(arr,k);
   

    return 0;
}
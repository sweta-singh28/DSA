#include <iostream>
#include<vector>
using namespace std;
int rob(vector<int>& nums, int i){
  //base case
  if(i>=nums.size()){
    return 0;
  }

  //solve 1 case
  int robAmnt1 = nums[i] + rob(nums, i+2);
  int robAmnt2 = 0 + rob(nums, i+1);

  return max(robAmnt1, robAmnt2);


}

int main() {
  vector<int>nums = {1,2,3,1};
  int i = 0;
  cout<<rob(nums, i);


  return 0;
}
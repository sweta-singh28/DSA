#include<iostream>
#include<vector>
using namespace std;

//Positioning Method
int findDuplicate(vector<int>nums){
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
    
}

int main(){
    vector<int>nums = {2,3,1,4,3};
    int size = 5;


    cout<<"The duplicate element is: "<<endl;
    int FinalResult = findDuplicate(nums);
    cout<<FinalResult;
    return 0;
}
#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

//By using sort()

int findDuplicate(vector<int>nums){
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i+1])
        {
            return nums[i];
        }
        
    }
    return -1;
    
}

int main(){
    vector<int>nums = {2,3,1,4,3};
    int size = 5;


    cout<<"The duplicate element is: "<<endl;
    int FinalResult = findDuplicate(nums);
    cout<<FinalResult;

    


    return 0;
}
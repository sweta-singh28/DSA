#include<iostream>
#include<vector>
using namespace std;

//By using counting method

int main(){
    vector<int>nums{2,0,2,1,1,0};
    int size = 6;

    int zeros = 0;
    int ones = 0;
    int twos = 0;


    //counting
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zeros++;
        }
        else if (nums[i] == 1)
        {
            ones++;
        }
        else{
            twos++;
        }
        
        
    }
    

    //spread
    int i = 0;
    while (zeros--)
    {
        nums[i] = 0;
        i++;
    }

    while (ones--)
    {
        nums[i] = 1;
        i++;
    }

    while (twos--)
    {
        nums[i] = 2;
        i++;
    }
    
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
//approach number 2
vector<int>twoSum(vector<int>arr, int target){
    vector<int>ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }

        }
    }
    return {-1, -1};

}

int main(){
    vector<int>arr{2,6,5,8,11};
    int target = 14;

    vector<int>finalAns = twoSum(arr, target);
    cout<<"The answer is: "<<finalAns[0]<<" "<<finalAns[1]<<endl;

    return 0;
}
#include <iostream>
#include<vector>
using namespace std;
//Generating all subarrays
void getSubArrays(vector<int>&arr,int start, int end){
    //base case
    if(end == arr.size()){
        return;
    }
    
    if(start <= end){
        for(int i=start; i<=end; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    getSubArrays(arr, start, end+1);
    
    getSubArrays(arr, start+1, end);
    
    
}

void Solve(vector<int>arr){
    getSubArrays(arr,0,0);
}



int main() {
    vector<int>arr{1,2,3,4,5};
    int start = 0;
    int end = arr.size()-1;
    
    Solve(arr);
    
    
    


    return 0;
}
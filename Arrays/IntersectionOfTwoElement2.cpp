#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    
    vector<int>arr = {1,2,5,3,6,-1};
    vector<int>brr = {9,6,5,8,1,2,3,-1};
    
    vector<int>ans;
    
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        for(int j=0; j<brr.size(); j++){
            if(element == arr[j]){
                brr[j] = INT_MIN;
                ans.push_back(element);
            }
        }
    }
    
    
    cout<<"The intersection of two arrays: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
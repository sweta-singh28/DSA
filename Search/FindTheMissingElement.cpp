//find missing element

#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid] - mid == arr[0]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return start+arr[0];
}

int main(){
    vector<int>arr{1,2,3,4,6,7};
    
    
    cout<<"The missing element is: "<<findMissing(arr)<<endl;
   

    
    return 0;
}
#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr, int& n, int i){
    
    //base case
    if(i==n-1){
        return true;
    }
    
    
    //solve 1 case
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    //calling function
    return checkSorted(arr, n, i+1);
    
}


int main() {
    vector<int>v{10,20,30,80,50};
    int n = v.size();
    int i=0; 
    
    bool isSorted = checkSorted(v, n, i);
    
    if(isSorted){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
   

    return 0;
}
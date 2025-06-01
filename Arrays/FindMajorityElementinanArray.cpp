#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMajorityElement(vector<int>arr){
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        int count = 0;
        
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        
        if(count > n/2){
        return arr[i];
        }
        
    }
    
    
    return -1;
}

int main(){
    
    vector<int>arr{1, 1, 2, 1, 3, 5, 1};
    int n = arr.size();
    int ans = findMajorityElement(arr);
    
    cout<<ans<<endl;
    
    
   
    return 0;
}
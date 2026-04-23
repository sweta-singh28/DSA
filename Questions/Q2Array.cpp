#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//using xor

int sol(vector<int>&arr){
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    
    return ans;
}

int main(){
    vector<int>arr = {-1, 2, -1, 3, 2, 4, 4};
    

    cout<<"First non repeating character is: "<<sol(arr);

    return 0;
}
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int sol(vector<int>&arr){
    unordered_map<int, int>freq;

    //count frequency
    for(int i=0; i<arr.size(); i++){
        int temp = arr[i];
        freq[temp]++;

    }

    for(int i=0; i<arr.size(); i++){
        if(freq[arr[i]] == 1){
            return arr[i];
        }   
    }

    return -1;
}

int main(){
    vector<int>arr = {-1, 2, -1, 3, 2};
    

    cout<<"First non repeating character is: "<<sol(arr);

    return 0;
}
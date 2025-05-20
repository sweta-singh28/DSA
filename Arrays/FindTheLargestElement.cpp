//using sorting

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>arr{2,5,8,9,10,3,4};
    sort(arr.begin(), arr.end());
    int LargestElement;

    for(int i=0; i<arr.size(); i++){
        LargestElement = arr[arr.size()-1];
        
    }

    cout<<"The Largest Element is: "<<LargestElement;


    
    return 0;
}
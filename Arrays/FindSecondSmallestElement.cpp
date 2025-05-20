#include<iostream>
#include<vector>
#include<climits>
#include<limits>
using namespace std;

int main(){
    vector<int>arr{2,5,6,8,1,900};
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    //Find the smallest element
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    //find the second largest element
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }

    cout<<"The second smallest is: "<<secondSmallest<<endl;

    return 0;
}

//TC--->O(n)
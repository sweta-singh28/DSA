#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Reverse(vector<int>&arr, int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeft(vector<int>&arr, int k,int n){
    // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

int main(){
    vector<int>arr{1,2,3,4,5,6};
    int k = 2;
    int n = arr.size();

    cout<<"After rotating the array is: "<<endl;
    rotateLeft(arr, k, n);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
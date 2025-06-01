#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(vector<int>&arr, int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(vector<int>&arr, int k){
    reverse(arr, 0, arr.size()-k-1);
    reverse(arr, arr.size()-k, arr.size()-1);
    reverse(arr, 0, arr.size()-1);

}

int main(){
    vector<int>arr{1,2,3,4,5,6};
    int k = 2;

    cout<<"After rotating the array is: "<<endl;
    rotateRight(arr, k);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
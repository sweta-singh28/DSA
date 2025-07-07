#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr, int i, int n){

    //base case
    //when the i is at last index it means the whole array is traversed we should return true cause the array is sorted
    if(i == n-1){
        return true;
    }

    //solve 1 case
    if(arr[i] <= arr[i+1]){
        return true;
    }

    //recursive call
    return isSorted(arr, i+1, n);

}

int main(){
    vector<int>arr{2,3,4,5};
    int n = arr.size();
    int i = 0;

    bool ans = isSorted(arr, n, i);
    if(ans){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }






    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(vector<int>arr, int n, int i ){
    //base case
    if(n <= i){
        return;
    }
    //solved 1 case
    cout<<arr[i]<<" ";


    //recursion call for rest of the element
    printArray(arr, n, i+1);
}


int main(){
    vector<int>arr{1,3,5,6,7,88,96,107};
    int n = arr.size();
    int i = 0;

    cout<<"Printing array: ";

    printArray(arr, n, i);

    return 0;
}
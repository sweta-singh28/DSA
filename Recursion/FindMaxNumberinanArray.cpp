#include <iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi){

    //base case
    //if complete array is traversed the return
    if(i>=n){
        return;
    }

    //solve 1 case
    //check current element for maxi
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    
    //baki recursion sambhal lega
    findMax(arr, n, i+1, maxi);

}



int main() {
    
    int arr[] = {10,20,30,22,60,66,56};
    int n = 7;
    int i = 0;
    int maxi = INT_MIN;
    
    findMax(arr, n, i, maxi);
    cout<<"The maximum number is: "<<maxi<<endl;
    
    return 0;
}
#include <iostream>
#include<vector>
using namespace std;
//WAP  find the sum of all elements in an array using recursion.

int sumofElements(vector<int>arr, int n, int i){
    int sum = 0;
    //base case
    if(i==n){
        return 0;
    }
    //solve 1 case
    return arr[i] + sumofElements(arr, n, i+1);
}


int main() {
    vector<int>arr{1,2,3,4};
    int n = arr.size();
    int i = 0;
    int sum = 0;
    
    int finalAns = sumofElements(arr, n,i);
    cout<<"The sum is: "<<finalAns<<endl;
    
 
    return 0;
}
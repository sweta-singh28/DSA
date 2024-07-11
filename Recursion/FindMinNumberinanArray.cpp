#include <iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int& mini){
                                      //pass by reference
    //base case
    //if array is traversed then return
    if(i>=n){
        return;
    }
    
    //solve 1 case 
    //check current element for min
    mini = min(mini, arr[i]);
    
    //calling function recursively to handle other cases
    findMin(arr, n, i+1, mini);
    
}


int main() {
    
    int arr[] = {10,20,5,22,60,66,56};
    int n = 7;
    int i = 0;
    int mini = INT_MAX;
    
    findMin(arr, n, i, mini);
    
    cout<<"The minimum number is "<<mini<<endl;
    
    return 0;
}
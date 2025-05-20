#include<iostream>
#include<vector>
#include<limits>
#include<climits>
using namespace std;
    
int main(){
    vector<int>arr{1,5,2,3,9};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;


    //find largest element
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    

    //find second largest element
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    cout<<"The second largest element is: "<<secondLargest;













    return 0;
}
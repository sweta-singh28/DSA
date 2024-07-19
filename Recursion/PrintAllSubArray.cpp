#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArrayUtil(vector<int>&arr, int start, int end){
  //base case
  if(end == arr.size()){
    return;
  }


  //solve 1 case
  for(int i=start; i<=end; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //RE
  printArrayUtil(arr, start, end+1);
}

void printSubArray(vector<int>& arr){
  for(int start = 0; start<arr.size(); start++){
    int end = start;
    printArrayUtil(arr, start, end);
  }
}
  

int main() {
  vector<int>arr{1,2,3,4,5};
  int start = 0;
  int end = start;

  printSubArray(arr);


 
  return 0;
}
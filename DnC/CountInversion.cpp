#include<iostream>
#include<vector>
using namespace std;

 long long inversionCnt = 0;
  void merge(vector<int>&arr, int l, int r){
      int mid = l+(r-l)/2;
      
      //length of left nd right array
      int len1 = mid-l+1;
      int len2 = r-mid;
      
      //create two arrays left nd right
      int* left = new int[len1];
      int* right = new int[len2];
      
      //copy logic
      //left
      int k = l;
      for(int i=0; i<len1; i++){
          left[i] = arr[k];
          k++;
      }
      //updating k for right array
      k = mid+1;
      for(int i=0; i<len2; i++){
          right[i] = arr[k];
          k++;
      }
      
      
      //merge logic
      int leftIndex = 0;
      int rightIndex = 0;
      int mainArrayIndex = l;
      
      //comparision
      while(leftIndex < len1 && rightIndex < len2){
          if(left[leftIndex] <= right[rightIndex]){
              arr[mainArrayIndex] = left[leftIndex];
              leftIndex++;
              mainArrayIndex++;
          }
          else{
              arr[mainArrayIndex] = right[rightIndex];
              mainArrayIndex++;
              rightIndex++;
              inversionCnt += (len1-leftIndex);
          }
      }
      
      //for remaining element
      while(leftIndex < len1){
          arr[mainArrayIndex] = left[leftIndex];
              leftIndex++;
              mainArrayIndex++;
          
      }
      
      while(rightIndex < len2){
          arr[mainArrayIndex] = right[rightIndex];
              mainArrayIndex++;
              rightIndex++;
          
      }
      
      delete[] left;
      delete[] right;
  }
  
  
  void mergeSortRecursion(vector<int>&arr, int l, int r){
      //base case
      //l == r ---->single element
      //l > r ---->invalid array
      if(l>=r){
          return;
      }
      
      int mid = l+(r-l)/2;
      
      //sort left part using recursion
      mergeSortRecursion(arr, l, mid);
      
      //sort the right part using recursion
      mergeSortRecursion(arr, mid+1, r);
      
      
      //merge two sorted array
      merge(arr, l, r);
  }
  
int main(){

    vector<int>arr{2, 4, 1, 3, 5};

    inversionCnt = 0;
    int l = 0;
    int r = arr.size()-1;
        
    mergeSortRecursion(arr, l, r);
        
        cout<<inversionCnt<<endl;

    
    return 0;
}
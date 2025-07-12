#include <iostream>
using namespace std;

void mergeTwoSortedArrays(int* arr, int s, int e){
    int mid = s+(e-s)/2;
    
    //length of left sub array 
    int len1 = mid -s+1;
    //length of right sub array 
    //        e-(mid+1)+1 ===> e-mid   (mid+1 cause the right                                   //subarray starts from mid+1)
    int len2 = e-mid;
    
    //create a new array left of length len1  
    int* left = new int[len1];
    //Create a new array right of length len2
    int* right = new int[len2];
    
    //copy logic
    //copy the left side elements in left array
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    //copy the right side elements in right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    
    //Now merge both the arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    
    
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }
    

    //After all comparision
    //Copy the left elements in the main array from left array
    while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    //copy the left elements int the main array from the right array
    while(rightIndex< len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
    
}

void mergeSort(int* arr, int s, int e){
    //base case
    //s==e ----> single element
    //s>e ----->Invalid array
    if(s>=e){
        return;
    }
    
    int mid = s+(e-s)/2;
    //RE call for left side
    mergeSort(arr, s, mid);
    
    //RE call for right side
    mergeSort(arr, mid+1, e);
    
    //call a fucntion to merege both the sorted arrays
    mergeTwoSortedArrays(arr, s, e);
}


int main() {
    int arr[] = {23,4,66,8,91};
    int n = 5;
    
    int s = 0;
    int e = n-1;
    
    mergeSort(arr, s, e);
    
    //printing the array
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
#include <iostream>
using namespace std;
//merge sort

void merge(int* arr, int s, int e){
    int mid = s+(e-s)/2;
    
    //the length of both the array
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    //Create two new arrays of length len1 and len2
    int* left = new int[len1];
    int* right = new int[len2];
    
    //copy the elements from the main array to newly created arrays 
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    
    
    //now merge both the arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    
    //Now copy the left elements 
    while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    
    while(rightIndex<len2){
        arr[mainArrayIndex++] = right[rightIndex++]; 
    }
    
}


void mergeSort(int* arr, int s, int e){
    //base case
    //s==e ---> single element
    //s>e ----->Invalid array
    if(s>=e){
        return ;
    }
    
    int mid = s+(e-s)/2;
    //RE call for left side
    mergeSort(arr, s, mid);
    
    //RE call for right side
    mergeSort(arr, mid+1, e);
    
    //Call merge function to merge the two sorted array
    merge(arr, s, e);
    
}


int main() {
    int arr[] = {2,6,8,9,3,4,5};
    int n = 7;
    
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
//A. Break the array (single element)
//B. Sort the left side using recursion (RE) call
//C. sort the right side using recursion (RE) call
//D. Merge left and right or two sorted array


//Step1---> MergeSort(){
//         -Break thhe array
//         - Sort left and right part using recursion
//         left--> MergeSort(arr, s, mid+1)   (for left side)
//         right---> MergeSort(arr, mid+1, e)  (for right side)
//}
//step2----> Merge(){
//         -length of two array len1 and len2
//         -Create two new arrays left and right
//         -Copy the values of left side of the main array in new left array of length len1
//         -Copy the values of right side pf the main array in right array of length len2
//         -Copy the left elements(of left and right arrays) in main array
//}


#include <iostream>
using namespace std;


//function to merge 2 sorted array
void merge(int*arr, int s, int e){
    int mid = (s+e)/2;
    
    int len1 = mid - s + 1; //length of left array
    int len2 = e - mid;   //length of right array
    
    //assume to create arrays for len1, len2, length
    int* left = new int[len1];
    int* right = new int[len2];
    
    //copy values    (left array)
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    
    //copy values  (right array)
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    
    //merge logic
    int leftIndex = 0;   
    int rightIndex = 0;
    int mainArrayIndex = s;
    
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++]; 
            //mainArrayIndex++;
            //leftIndex++;
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
            //mainArrayIndex++;
            //rightIndex++;
            
        }
    }
    
    
    //copy logic for left array
    //(if the elements is left in left array after comparison then copy it in mainArray)
    while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    } 
    
    //copy logic for right array
    //(if elements is left in right array after comparison then copy it mainArray)
    while(rightIndex<len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
     
    //TODO: delete left and right wala newly created array
    
    
}


void mergeSort(int* arr, int s, int e){
    //base case
    //s == e --> single element
    //s>e --> Invalid array
    
    if(s>=e){
        return;
    }
    
    
    int mid = (s+e)/2;
    //sort left part of the array using recursion
    mergeSort(arr, s, mid);
    
    //sort right part of the array using recursion
    mergeSort(arr, mid+1, e);
    
    
    //now merge 2 sorted arrays
    //create a merge function two merge the right array and left array
    merge(arr, s,e);
    
    
    
}


int main() {
    int arr[] = {9,1,5,67,89,199,23,67,9,9,0,-1};
    int n = 12;
    
    int s = 0;
    int e = n-1;
    
    //calling the fuction
    mergeSort(arr, s, e);
    
    //print the sorted array
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
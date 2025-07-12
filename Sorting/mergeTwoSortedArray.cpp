#include<iostream>
#include<vector>
using namespace std;
void merge(int* arr, int s, int e){

    int mid = s+(e-s)/2;

    //length of both the new array
    int len1 = mid-s+1;
    int len2 = e-mid;

    //creating two arrays left nd right of len1 and len2
    int* left = new int[len1];
    int* right = new int[len2];



    //copy values

    //copy the values in newly created left array 
    int k = s;
    for(int i = 0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    //copy the values in newly created right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }


    
    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
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


    //copy logic for remaining element
    //copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }



    //to do
    //delete newly created left nd right array
    delete[] left;
    delete[] right;



    
}

void mergeSort(int* arr, int s, int e ){
    //base case
    //s == e ----> single element
    //s>e ---->invalid array
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    //sort the left part using recursion
    mergeSort(arr, s, mid);

    //sort the right part using recursion 
    mergeSort(arr, mid+1, e);

    //now merge two sorted arrays
    merge(arr, s, e);

}


int main(){
    int arr[] = {4,13,12,6,9};
    int n = 5;

    int s = 0;
    int e = n-1;

    //calling the mergeSort()
    mergeSort(arr,s,e);

    //printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;





    return 0;
}
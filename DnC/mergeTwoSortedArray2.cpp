#include<iostream>
#include<vector>
using namespace std;
void merge(int* arr, int s, int e){
    
    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    //create two arrays of len1 nd len2
    int* left = new int[len1];
    int* right = new int[len2];


    //copy values 
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

    //copy for remaining elements in left array 
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    //copy logic for remaining elements in right array 
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    //to do delete left nd right array

}

void mergerSort(int* arr, int s, int e){
    //base case
    //s == e-----> single element
    //s > e------>invalid array
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    //sort the left part using recursion
    mergerSort(arr, s, mid);

    //sort the right part using recursion 
    mergerSort(arr, mid+1, e);



    //now merge two sorted array 
    merge(arr, s, e);
}

int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;

    mergerSort(arr, s, e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    return 0;
}
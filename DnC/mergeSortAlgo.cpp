#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = s+(e-s)/2;

    //length of both the new arrays
    int len1 = mid-s+1;
    int len2 = e-mid;

    //create two array left and right
    int* left = new int[len1];
    int* right = new int[len2];

    //copy the elements in both new arrays
    //for left array
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    //for right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }


    //merge logic 
    int mainArrayIndex = s;
    int leftIndex = 0;
    int rightIndex = 0;
    
    //compare the left nd right array nd transfer the elements in main array
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //now check the remaining elements in left nd right elements
    //left array
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    //right array
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }
     
    //now delete the left nd right array
    delete[] left;
    delete[] right;


}

void mergeSort(int* arr, int s, int e){
    int mid = s+(e-s)/2;

    //base case
    if(s>=e){
        return;
    }

    //sort the left part using recursion
    mergeSort(arr, s, mid);

    //sort the right part using recursion
    mergeSort(arr, mid+1, e);

    //calling merge function to merge both the arrays 
    merge(arr, s, e);

}

int main(){
    int arr[] = {2,6,8,1,6,0,2,5,6,7,3,12};
    int n = 12;
    int s = 0;
    int e = n-1;

    //calling mergerSort function
    mergeSort(arr, s, e);

    //printing sorted array
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
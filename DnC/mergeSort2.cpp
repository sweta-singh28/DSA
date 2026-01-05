#include <iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = s+(e-s)/2;

    //The length of the left subarray
    int len1 = mid -s+1;
    //The length of the right subarray
    int len2 = e-mid;

    //ek array banao left naam ka jiski length len1 h (dynamically)
    int* left = new int[len1];
    //ek array banao right naam ka jiski length len2 h (dyamically)
    int* right = new int[len2];

    //copy the values
    //copy the values of left subarray in left naam k new array m
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    //copy the values of right subarray in right naam k new array m 
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }   //We copied all values now we need to merger (merge logic)


    //Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left [leftIndex] < right [rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr [mainArrayIndex] = right [rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //copy logic for the elemnts which are left in array after the comparisions (jo v elements bach gye honge array m ab unko copy krdo left right array m)  (possible ki dono left and right array same no. of elemnts naa ho so jo bache huye elents h unko copy krdo main array m as it is.)

    //Copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //Copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    //TODO--> Delete the left and right newly created array just to save the space
    delete[] left;
    delete[] right;
}

void mergeSort(int* arr, int s, int e){
    //base case
    //s==e ----> single element
    //s>e  -----> Invalid array
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    //Sort the left part of the array using recursive call
    mergeSort(arr, s, mid);

    //Sort the right part of the array using recursive call
    mergeSort(arr, mid+1, e);

    //Now merge the left subarray and rightsubArray
    //Call a another function to merge two sorted array
    merge(arr,s,e);

}

int main() {
    int arr[] = {66,7,4,53,5};
    int n = 5;

    int s = 0;
    int e = n-1;
    
    //Calling mergeSort function
    mergeSort(arr, s, e);

    //print the array
    cout<<"the sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
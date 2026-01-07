#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    //step 1---> choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step 2----> find right position of pivot element nd place it at its right position 
    int count = 0;
    for(int i=s; i<=e; i++){
        if(arr[i] < pivotElement){
            count++;
        }
    }
    //loop se bahar aane k baad ill have the right index position for pivot element
    int rightIndex = s+count;
    swap(arr[rightIndex], arr[pivotIndex]);
    //update the pivotIndex
    pivotIndex = rightIndex;


    //step 3--> check left side m chhote elements nd right side m bade elements 
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= arr[pivotIndex]){
            i++;
        }
        while(arr[j] > arr[pivotIndex]){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;

}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition logic
    int p = partition(arr, s, e);


    //sort left part using recursion
    quickSort(arr, s, p-1);
    
    //sort right part using recursion
    quickSort(arr, p+1, e);
}



int main(){
    int arr[] = {8,1,3,4,20,50,30,30,30};
    int n = 9;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);
    
    //printing array
    cout<<"Sorted Array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;





    return 0;
}
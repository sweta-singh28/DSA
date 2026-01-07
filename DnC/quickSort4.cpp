#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    //step 1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step 2: find right position for pivot element nd place it there 
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    //jan m loop se bahar aa jaungi toh ill have the right index for pivot element so now i have to swap the pivot element with its correct positions element 
    int rightIndex = count+s;
    swap(arr[pivotIndex], arr[rightIndex]);
    //update pivotIndex 
    pivotIndex = rightIndex;

    //step 3: make sure left m chhote right m bade 
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }
        //after this loop 2 cases possible 
        //A-> you found the element to swap 
        //B--> no need to swap the right side m sare bade elements h nd left side m sare smaller elements 
        if(i < pivotIndex && j > pivotIndex){
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

    //partition logic----> returns the index of pivot element  
    //p is the index of pivot element   
    int p = partition(arr, s, e);

    //recursion call to sort left part before pivot element 
    quickSort(arr, s, p-1);

    //recursion call to sort the right part after pivot element 
    quickSort(arr, p+1, e);
}


int main(){
    int arr[] = {8,1,3,4,20,50,30,30,30};
    int n = 9;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    //printing the sorted array
    cout<<"The array is sorted "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;





    return 0;
}
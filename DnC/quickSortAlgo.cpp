#include<iostream>
using namespace std;
int partitionLogic(int arr[], int s, int e){
    //step 1--> choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step 2--> place the pivot element at its right position 
    //find the correct postion of pivot element
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivotElement){
            count++;
        }
    }
    //rightIndex stores the correct index position for pivot 
    int rightIndex = count+s;
    //swap the pivot element with its correct positions element
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //step: 3---> make sure left side m chhote elements kd right side m bade elements pivot k 
    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivotElement){
            i++;
        }
        while(j>pivotIndex){
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
    int p = partitionLogic(arr, s, e);

    //recursive call for left side
    quickSort(arr, s, p-1);

    //recursive call for right side
    quickSort(arr, p+1, e);
}


int main(){
    int arr[] = {8,1,3,4,20,50,30,30,30};
    int n = 9;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    //printing the elements
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    
    return 0;
}
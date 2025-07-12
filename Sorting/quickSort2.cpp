#include <iostream>
using namespace std;
int partition(int* arr, int s, int e){
    //step1--> Choose pivotElement
    int pivotIndex = s;
    int pivotElement = arr[s];
    
    //step2---> Find right position of pivot element and place it there
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    //Jab m loop se bahar aayi toh mere paas toh mere paas pivot ki correct position ka index ready h
    int correctIndex = s+count;
    swap(arr[pivotIndex], arr[correctIndex]);
    //update the position of pivotIndex
    pivotIndex = correctIndex;
    
    
    //step3--> left m chhote and right m bade elements
    int i = s;
    int j = e;
    
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        
        //2 case ho skte
        //A. Found elements to swap
        while(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        //B. No need to swap
    
    }
    return pivotIndex;

    
}

void quickSort(int* arr, int s, int e){
    //base case
    //s==e ===> single element
    //s>e  ====? Invalid array
    if(s>=e){
        return ;
    }
    
    //partition logic, returns the pivotIndex
    int p = partition(arr, s, e);
    
    //RE calls
    //pivot  element   -> left
    quickSort(arr, s, p-1);
    
    //pivot element  --> right
    quickSort(arr, p+1, e);
}

int main() {
    int arr[] = {4,2,67,33,9};
    int n = 5;
    
    int s = 0;
    int e = n-1;
    
    quickSort(arr, s, e);
    
    cout<<"The sorted array is: "<<endl;
    
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
    cout<<endl;
    
    
    return 0;
}

//step-1 Choose pivot element
//step-2 Place the element at its right place
        //count no.< pivotElement 
        //swap arr[pivotIndex], arr[s+count]
//step-3 write Partition logic        
//Recursive call for left and right sub array

 
 

 
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    //partition logic
    //step 1: choose pivot element
    int pivotIndex = s; //first element is pivotElement
    int pivotElement = arr[s];


    //step 2: Find the right position of the pivot element and place it at 
    //its right position
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }


    //loop se bahar aane k baad mere pass pivotElement ka index mil chuka h 
    //and now place the pivotElement at its correct place
    int correctIndex = s+count; 
    //swap the pivot's current position with pivot's correct position
    swap(arr[pivotIndex], arr[correctIndex]);
    //now update the  index of pivot element
    pivotIndex = correctIndex;


    //step 3: now left side m chhote and right side m bade
    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        //yaha pe = sign isliye kyu ki possible ki array m equal elements v ho
        //for that reason = wala case apan idhr sambhal rhe
        while(arr[i] <= pivotElement){ //= sign
            i++;
        }

        while(arr[j] > pivotElement){
            j--;
        }

        //2 case ho skte h
        //A. You found the element to swap
        if(i<pivotIndex && j>pivotIndex){
        swap(arr[i], arr[j]);
        i++;
        j--;
        }
        //B. No need to swap

    }
    return pivotIndex;


}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition logic, returns pivotIndex
    //p = index of pivot element
    int p = partition(arr, s, e);



    //recursive calls
    //left side of pivot element
    quickSort(arr, s, p-1);

    //right side of pivot element
    quickSort(arr, p+1, e);

}

int main() {
    int arr[] = {8,1,3,4,20,50,30};
    int n = 7;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    //printing the sorted array
    cout<<"Printing the sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
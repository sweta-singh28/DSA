#include <iostream>
using namespace std;

//Partion function
int partition(int arr[], int s, int e){
    //choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //now place the pivot elements at its correct place
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivotElement){
            count++;
        }
    }

    int correctIndex = s+count;
    swap(arr[pivotIndex], arr[correctIndex]);
    pivotIndex = correctIndex;

    //left m chhote and right m bade
    int i=0; 
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[i] > pivotElement){
            j--;
        }


         //2 case ho skte h
    //case1---> you found the element to swap
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i], arr[j]);
    }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return ;
    }

    //partion logic
    int p = partition(arr, s, e);

    //Re call
    //left
    quickSort(arr, s, p-1);
    //right
    quickSort(arr, p+1, e);


}

int main() {
    int arr[] = {2,5,8,3,4,7};
    int n = 6;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    //printing the array
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
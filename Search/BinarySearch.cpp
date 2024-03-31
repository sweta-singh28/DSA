#include<iostream>
using namespace std;

//TC - O(logn)

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start<=end) {
        int element = arr[mid];   
        
        if (element == target)
        {
            return mid;                //element found, then return index
        }
        else if (target<element)
        {
            //search in the left
            end = mid-1;
        }
        else{
            //search in right
            start = mid+1;
        }

        mid = start + (end - start)/2;
     
    }
    //element not found
        return -1;

}

int main(){

    int arr[] = {2,5,6,9,1,3,8,7};
    int size = 8;
    int target = 6;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout<<"Target not foundddd"<<endl;
    }
    else{
        cout<<"Target foundddd at index: "<<indexOfTarget<<endl;
    }
    

    return 0;
}
#include<iostream>
using namespace std;

//By using sort function  TC- O(nlogn)

int main(){

    int arr[] = {-1,-3,5,9,-2,4,7,-11,11};
    int size = 9;

    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size-1; i++)
    {
        if (arr[i] < 0 )
        {
            swap(arr[i], arr[start]);
            start++;
        }
        else{
            swap(arr[i], arr[end]);
            end--;
        }
        
    }

    //printing the array
    cout<<"The sorted array is: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
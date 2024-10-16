#include<iostream>
#include<vector>
using namespace std;
//find first Occerence
int FirstOcc(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
  

    while (start<=end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid-1;
           // start = mid+1;

        }
        else if (arr[mid] < target)
        {
            //search in right side
            start = mid+1;
        }
        else{
            //search in left side
            end = mid-1;
        }
        mid = start+(end-start)/2;
        
    }
    return ans;

}

//find last occurence
int LastOcc(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
  

    while (start<=end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid+1;
        }
        else if (arr[mid] < target)
        {
            //search in right side
            start = mid+1;
        }
        else{
            //search in left side
            end = mid-1;
        }
        mid = start+(end-start)/2;
        
    }
    return ans;

}



int main(){
    int arr[] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
    int size = 10;
    int target = 8;
    
    int finalAns = FirstOcc(arr, size, target) + LastOcc(arr, size, target) + 1;

    cout<<"Answer is: "<<finalAns;



    return 0;
}
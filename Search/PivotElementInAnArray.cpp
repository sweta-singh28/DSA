#include<iostream>
#include<vector>
using namespace std;

//search in soretd and rotated array


int findPivot(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while (e>=s)
    {
        if (e == s)
        {
            //single eleement in an array
            return s;
        }
        if (mid <= e && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        if (mid-1 >= e && arr[mid-1]>arr[mid])
        {
            return mid-1;
        }

        if (arr[s]>arr[mid])
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s + (e-s)/2;
        
    }
    
    return -1;

}

int main(){
    vector<int>arr{2,4,6,8,9,10};

    int finalAnswer = findPivot(arr);
    cout<<"Answer is at index is: "<<finalAnswer<<endl;
    cout<<"Answer is: "<<arr[finalAnswer]<<endl;
    return 0;
}
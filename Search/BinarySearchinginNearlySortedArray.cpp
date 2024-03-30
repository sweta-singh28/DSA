#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid+1 <= e && arr[mid+1] == target)
        {
            return mid+1;
        }
        else if (mid-1 >= s &&arr[mid-1] == target)
        {
            return mid-1;
        }

   
        else if (arr[mid]<target)
        {
            //right search
            s = mid+2;
        }
        else{
            //left search
            e = mid-2;
        }
        mid = s + (e-s)/2;
        
    }
    return -1;
    


}

int main(){ 

    vector<int>arr{30,40,2,50,60,9,6};
    int target = 40;

    int finalAnswer = binarySearch(arr, target);
    cout<<"The index of "<<target<<" is "<<finalAnswer<<endl;

    return 0;
}
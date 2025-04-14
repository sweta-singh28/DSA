#include<iostream>
#include<vector>
using namespace std;

//By using in-place method  (3-pointer approach)

int main(){
    vector<int>arr{0,1,0,1,2,1,2,1,0,2,0};

    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    //printing the array
    cout<<"The sorted array is: "<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;

}
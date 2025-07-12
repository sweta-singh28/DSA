#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr, int n){
    for(int i=0; i<n; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }

        }
        swap(arr[minIndex], arr[i]);
        
    }

}



int main(){
    vector<int>arr{1,6,3,4,1,99,6};
    int n = arr.size();

    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}
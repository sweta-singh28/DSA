#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        int min = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);

    }
}

int main(){
    vector<int>arr{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    selectionSort(arr);

    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;




    return 0;
}
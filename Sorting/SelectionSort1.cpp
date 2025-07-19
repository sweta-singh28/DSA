#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortArray(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        int minIndex = 0; //we will store the index of smallest element in minIndex after traversing the entire array 
        for(int j=i+1; j<arr.size(); j++){
            if(arr[minIndex] > arr[j]);
            minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

}


int main(){
    vector<int>arr{64, 25, 12, 22, 11};

    sortArray(arr);
    cout<<"Printing the sorted array"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
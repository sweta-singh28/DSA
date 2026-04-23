#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1, 5, 3, 2};

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            //restart the loop 
            i = -1;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}
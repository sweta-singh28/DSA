#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,5};

    int temp = arr.size();

    for(int i=arr.size()-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    //printing the array
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

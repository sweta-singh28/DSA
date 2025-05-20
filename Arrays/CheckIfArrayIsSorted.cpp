#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSorted(vector<int>arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] < arr[i+1]){
            return false;            
        }
    }
    return true;
}
 
int main(){
    vector<int>arr{1,2,3,4,5,6};

    

    if(isSorted(arr)){
        cout<<"The array is Sorted"<<endl;
    }
    else{
        cout<<"The array is Unsorted"<<endl;
    }

    return 0;
}
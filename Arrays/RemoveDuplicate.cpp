#include<iostream>
#include<vector>
#include<limits>
using namespace std;

//two pointer approach
int removeDuplicate(vector<int>&arr){
    int i=0; 
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;

}
int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,4};

    int finalAns = removeDuplicate(arr);
    for(int i=0; i<finalAns; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector<int>arr, int target){
    for(int i=0; i<arr.size();i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{1,6,4,2,9,87};
    int target = 9;


    int finalAns = findTarget(arr, target);
    cout<<"The target element is at index: "<<finalAns<<endl;

    return 0;
}
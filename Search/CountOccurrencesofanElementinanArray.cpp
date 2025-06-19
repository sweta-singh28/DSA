#include<iostream>
#include<vector>
using namespace std;
int findNumofOccurrences(vector<int>arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int count= 0;


    while(start<=end){
        if(arr[mid] == key){
            count++;
        }
        else if(arr[mid]> key){
            //search in left
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return count;

}

int main(){
    vector<int>arr{2,2 , 3 , 3 , 3 , 3 , 4};
    int key = 3;

    int finalAns = findNumofOccurrences(arr, key);
    cout<<finalAns<<endl;


    return 0;
}
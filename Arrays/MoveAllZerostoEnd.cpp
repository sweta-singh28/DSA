//without maintaining the relative order of non-zero elements in array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{0,1,4,5,0,0};
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        if(arr[start] == 0){
            swap(arr[end], arr[start]);
            end--;
        }
        else{
          start++;
        }
    }

    //printing the array
    cout<<"The final array is: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
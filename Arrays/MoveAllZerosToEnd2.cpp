//maintaining the order of non-zero element
#include<iostream>
#include<vector>
using namespace std;
void pushZerosToEnd(vector<int>& arr) {
    vector<int>temp;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
        
    }
    
    
    for(int i=0; i<temp.size(); i++){
        arr[i] = temp[i];
    }
    
    
    for(int i=temp.size(); i<arr.size(); i++){
        arr[i] = 0;
    }
    
}

int main(){
    vector<int>arr{1,3,5,0,9,1,0,7,0,0};

    pushZerosToEnd(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}
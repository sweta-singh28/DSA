#include<iostream>
#include<vector>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    
    int key = 9;
    
    //taking input 
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    
    //printing the array
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(findKey(arr, rows, cols, key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    
    return 0;
}
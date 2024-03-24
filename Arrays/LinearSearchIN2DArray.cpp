#include<iostream>
using namespace std;

//SEARCHING AN ELEMENT

bool findKey(int arr[][3], int rows, int cols, int key){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
        {
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

    //taking input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Printing the rows and columns: "<<endl;
    //Printing
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
  
    int key = 3;

    if(cout<<findKey(arr,3,3,key)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"Flase"<<endl;
    }
    
    return 0;
}
#include<iostream>
#include<limits.h>
using namespace std;

int getMinNum(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]<mini){
                mini = arr[i][j];
            }
        }
        
    }
    return mini;
    
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

    cout<<"Printing the array: "<<endl;
    //printing
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<"The minimum number is: "<<getMinNum(arr, rows, cols);
    
    

    return 0;
}
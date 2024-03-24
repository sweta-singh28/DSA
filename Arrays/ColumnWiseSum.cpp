#include<iostream>
using namespace std;

//Column wise sum


 void printColumnWiseSum(int arr[][3], int rows, int cols){
    cout<<"Printing the sum: "<<endl;
    for (int i = 0; i <rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
        
    }
    
 }



int main(){

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout<<"Enter: "<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //printing

    cout<<"Printing the rows and columns: "<<endl;

    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printColumnWiseSum(arr, rows, cols);
    
    
    
    return 0;
}
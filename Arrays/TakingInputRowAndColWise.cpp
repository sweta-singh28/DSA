#include<iostream>
using namespace std;

int main(){
    int arr[3][3];

    int rows = 3;
    int cols = 3;

    //Row wise input
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //Printing row wise
    cout<<"Printing row wise: "<<endl;
    for (int  i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    

    cout<<endl;

    //col wise input
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
        
    }


    cout<<"Printing column wise: "<<endl;
    //Printing column wise
    for (int  i = 0; i <rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}
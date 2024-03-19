#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"Enter the values in array: ";
    //taking input
    for (int i = 0; i <5; i++)
    {
        cin>>arr[i];
    }

    //printing output
    for (int i = 0; i <5; i++)
    {
        cout<<2 * arr[i]<<" ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout<<"Enter the input values in array ";
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    //printing the values.
    cout<<"The values in the array are: "<<endl;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {1,2,4,6,8,2,54,66,72};
    int size = 11;

    int maxi = INT_MIN;

    for (int i = 0; i <size; i++)
    {
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"The maximum number in the given array: "<<maxi<<endl;
    

    return 0;
}
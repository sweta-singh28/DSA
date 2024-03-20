#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {1,4,5,2,-1,-2,-7,98};
    int size = 8;

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]<mini )
        {
            mini = arr[i];
        }
        
    }
    cout<<"The minimum element in the given array: "<<mini<<endl;
    
    
    return 0;
}
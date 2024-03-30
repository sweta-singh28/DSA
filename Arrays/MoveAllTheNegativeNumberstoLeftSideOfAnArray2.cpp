 #include<iostream>
#include<vector>

//Dutch National Flag Algorithm  (2 pointer approach)
using namespace std;

int main(){

    vector<int>arr{0,-4,1,3,9,-5,-8,-1};
    int size = 8;

    int start = 0;
    int end = arr.size() - 1;

    for (int i = 0; i <=end; i++)
    {
        if (arr[start]<0)
        {
            start++;
        }
        else if(arr[end]>0){
            end--;
        }
        else{
            swap(arr[end], arr[start]);
            start++;
            end--;
        }
        
    }

    //printing the array 
    cout<<"The sorted array is: "<<endl;
    for (int i = 0; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
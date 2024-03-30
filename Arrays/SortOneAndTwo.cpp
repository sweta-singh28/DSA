#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,1,1,2,1,1,2,2,1,2};
    int size = 12;

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        if (arr[i] == 1)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else{
            swap(arr[i], arr[end]);
            end--;
        }
        
    }


    cout<<"The sorted array is: "<<endl;
    //print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    

    return 0;
}
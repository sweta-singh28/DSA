#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{10,20,30,40,60,70};

    //print all pairs
    //outer loop will traverse for each element
    for (int i = 0; i<arr.size(); i++)
    {
        cout<<"We are at element: "<<arr[i]<<endl;
        int element = arr[i];

        for (int j = i+1; j<arr.size(); j++)
        {
            cout<<" pair "<<element<<" with "<<arr[i]<<endl;
        }
        
    }
    return 0;
}


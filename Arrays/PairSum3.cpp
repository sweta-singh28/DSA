#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{10,20,30,40,60,70,5,5};
    int sum = 80;

    //print all pairs
    //outer loop will traverse for each element
    for (int i = 0; i<arr.size(); i++)
    {
        // cout<<"We are at element: "<<arr[i]<<endl;
        int element = arr[i];

        for (int j = i+1; j<arr.size(); j++)
        {
            for (int k= j+1; k<arr.size(); k++)
            {
                if(element + arr[j] + arr[k]== sum){
                cout<<"Pair Found "<<element<<", "<<arr[j]<<", "<<arr[k]<<endl;
            }
            }
            
        }
        
    }
    return 0;
}


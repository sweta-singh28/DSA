#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findPairs(vector<int>arr, int k){
    //sort the array
    sort(arr.begin(), arr.end());
    
   
    int i=0, j=0;
    while (j<arr.size())
    {
        int diff = arr[j]-arr[i];
        if (diff == k)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++, j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else{
            j++;
        }
        
    }
    return -1;
    

}

int main(){

    vector<int>arr{3,1,4,1,5};     
    int k = 2;


    findPairs(arr,k);
   

    return 0;
}
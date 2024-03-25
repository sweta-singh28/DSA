#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findFirstRepeatedElement(int arr[], int n){
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i+1;
        }
        
    }
    return -1;
    
    

}

int main(){
    int arr[] = {1,5,3,4,5,6};
    int n = 7;

    int finalResult = findFirstRepeatedElement(arr , n);
    cout<<"The Repeating element in the given array is at the index: " <<finalResult<<endl;



    return 0;
}
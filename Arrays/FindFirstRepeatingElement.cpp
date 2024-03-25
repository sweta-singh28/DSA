#include<iostream>
#include<vector>
using namespace std;

int findFirstRepeatedElement(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        bool isRepeated = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return i+1;
            }
            
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
#include<iostream>
using namespace std;

void count(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==2){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int arr[]= {1,2,3,2,5,2,3,2,2};
    int size = 9;
    
    count(arr, size);
}
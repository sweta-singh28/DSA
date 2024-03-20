//Finf an element in an array

#include <iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for (int i = 0; i <size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        
    }
    return false;
    
}

int main(){
    int arr[5] = {2,1,4,5,9};
    int size = 5;

    int key;
    cout<<"Enter the key to find: ";
    cin>>key;

    if (find(arr, size, key))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found:("<<endl;
    }
    

    return 0;
}
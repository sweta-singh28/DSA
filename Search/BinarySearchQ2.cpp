#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Using STL in array

int main(){
    int arr[] = {1,4,5,7,8,10,11};
    int size = 7;

    if (binary_search(arr, arr+size, 7))    //arr- Base address  arr+size- last address   7- target or searching element
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    


    return 0;
}
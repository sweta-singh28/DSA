#include<iostream>
#include<vector>
using namespace std;

bool findKey(vector<vector<int>>& arr, int key){

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;


}

int main(){
    vector<vector<int>>arr =  {{1, 2, 3}, 
                               {4, 5, 6},  
                               {7, 8, 9}};

    

    int key = 9;

    cout<<"Answer is: "<<findKey(arr, key);


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
//Brute Force approach
int FindMissingNumber(vector<int>arr){
    for(int i=1; i<=arr.size(); i++){
        int flag = 0;
        for(int j=0; j<arr.size()-1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return -1;

}



int main(){
    vector<int>arr{1,2,4,5};


    int finalAns = FindMissingNumber(arr);
    cout<<"The missing number is: "<<finalAns<<endl;
    
    
    return 0;
}
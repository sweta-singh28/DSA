#include<iostream>
#include<vector>
using namespace std;
//approach number 1
int main(){
    vector<int>arr{2,6,5,8,11};
    int target = 14;


    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == target){
                cout<<"YES"<<endl;
            }
        }
    }
    cout<<"NO"<<endl;


    return 0;
}
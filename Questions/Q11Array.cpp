#include<iostream>
#include<vector>
using namespace std;

void rowSum(vector<vector<int>>& arr){

    for(int i=0; i<arr.size(); i++){
        int sum = 0;
        for(int j=0; j<arr[i].size(); j++){
            sum += arr[i][j];
           
        }
        cout<<sum<<endl;
    }
    

}

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>>arr(n, vector<int>(m));

    //taking input
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cin>>arr[i][j];
        }
    }

    

    rowSum(arr);


    return 0;
}
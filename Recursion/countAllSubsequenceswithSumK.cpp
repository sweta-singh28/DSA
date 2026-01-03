#include<iostream>
#include<vector>
using namespace std;
int recursion(vector<int>&arr, int count,int k, int i){
    //base case
    if(k == 0){
        return count;
    }
    







}

int main(){
    vector<int>arr = {10,1,2,7,6,1,5};
    int k = 8;

    int count = 0;
    int i = 0;
    int ans = recursion(arr, count, k,  i);

    cout<<"The answer is: "<<ans<<endl;

    return 0;
}
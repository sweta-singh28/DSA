#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int findMinimum(vector<int>arr, int n, int i, int &mini){
    //base case
    if(i>=n){
        return -1;
    }

    //solve 1 case
    mini = min(mini, arr[i]);

    return findMinimum(arr, n, i+1, mini);

}
int main(){
    vector<int>arr{3,5,8,9};
    int n = arr.size();
    int mini = INT_MAX;

    int i = 0;

    int ans = findMinimum(arr,n,i, mini);
        cout<<"Answer is: "<<mini<<endl;
    
    
    return 0;
}
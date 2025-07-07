#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void findMaxi(vector<int>arr, int i, int n, int& max){       //max---> pass by reference 
    //base case
    if(i>=n){
        //traversing if array is completed
        return;
    }

    //solve 1 case (check current element fox maximum)
    if(arr[i] > max){
        max = arr[i];
        cout<<max;
    }
   

    //recursive call
    findMaxi(arr, i+1, n, max);

}
int main(){
    vector<int>arr{1,6,9,3,5,2,8};
    int n = arr.size();
    int max = INT_MIN;
    int i = 0;    //index

    findMaxi(arr, i, n, max);

    cout<<"Answer is: "<<max<<endl;

    
    
    return 0;
}
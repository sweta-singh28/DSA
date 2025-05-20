#include<iostream>
#include<vector>
using namespace std;
//using xor method
int findMissingElement(vector<int>arr, int n){
    int xor1  =0;
    int xor2 = 0;

    for(int i=0; i<arr.size()-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }

    xor1 = xor1 ^ n;
    return (xor1 ^ xor2);

}

int main(){
    vector<int>arr{1,2,3,4,6};
    int n = 5;


    int ans = findMissingElement(arr, n);
    cout<<"The missing number is: "<<ans;

    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutive(vector<int>arr){
    int count = 0;
    int maxi = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            count++;

        }
        else{
            count = 0;
        }
        maxi = max(maxi, count);
    }
    
    return maxi;

}

int main(){
    vector<int>arr{1,2,3,5,1,1,1,1,7};

    int ans = findMaxConsecutive(arr);
    cout<<"The answer is: "<<ans<<endl;
    return 0;
}
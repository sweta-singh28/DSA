#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 3, 4, 2, 6, 5, 8, };

    int sum = 0;

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }


    cout<<"Answer is: "<<sum/arr.size();



    return 0;
}
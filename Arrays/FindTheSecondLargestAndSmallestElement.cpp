//with sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{1,7,8,4,3,2,56};
    sort(arr.begin(), arr.end());


    cout<<"The Second Largest Element is: "<<arr[1]<<endl;
    cout<<"The second smallest Element is: "<<arr[arr.size()-2]<<endl;





    return 0;
}
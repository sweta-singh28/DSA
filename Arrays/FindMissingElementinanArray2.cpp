#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingElement(vector<int>arr){
    int n = arr.size();
    int sum = ((n + 1) * (n + 2)) / 2;
    int arrSum = 0;

    for(int i=0; i<arr.size(); i++){
        arrSum += arr[i];
    }

    int missingElement = sum - arrSum;
    return missingElement;
}

int main(){
    vector<int>arr{1,2,3,5};

    int finalAns = missingElement(arr);
    cout<<"The missing element is: "<<finalAns<<endl;





    return 0;
}
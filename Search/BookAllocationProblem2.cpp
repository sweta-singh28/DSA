#include<iostream>
#include<vector>
using namespace std;
bool isPossibleSolution(vector<int>arr, int n, int k, int mid){
    int student = 1;
    int pagesSum = 0;
    for(int i=0; i<arr.size(); i++){
        if(pagesSum + arr[i] <= mid){
            pagesSum += arr[i];
        }
        else{
            //need another student
            student++;
            if(student > k || arr[i] > mid){
                return false;
            }
            //add pages for another student
            pagesSum = arr[i];
        }

    }

    return true;
}
int main(){
    vector<int>arr = {25, 46, 28, 49, 24};
    int n = 5;
    int k = 4;    //no. of student
    int ans = -1;
    int start = 0;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }
    int end = sum;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(isPossibleSolution(arr,n,k,mid)){
            //store the ans
            ans = mid;
            //search in left side for smaller ans 
            end = mid-1;
        }
        else{
            //not a possible ans so search in right side 
            start = mid+1;
        }
    }

    cout<<"Ans is:" <<ans<<endl;



    return 0;
}
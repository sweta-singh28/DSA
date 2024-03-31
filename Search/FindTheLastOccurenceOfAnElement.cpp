#include<iostream>
#include<vector>
using namespace std;

int  getIndexOfLast(vector<int>v, int target){
    int s = 0;
    int e = v.size() - 1;

    int mid = s + (e - s)/2;
    int ans = -1;


    while (e>=s)
    {
    if (v[mid] == target)
    {
        //store the ans
        ans = mid;
        s = mid+1;
    }
    else if (v[mid]>target)
    {
        //search in left side
        e = mid-1;
    }
    else if (v[mid]<target)
    {
        //search in right side
        s = mid+1;
    }

    mid = s + (e - s)/2;

    }
    return ans;

}

int main(){

    vector<int>v{1,2,5,6,6,6,6,6,8,9};
    int target = 6;
    
    int indexOfElement = getIndexOfLast(v, target);

    cout<<"The answer is: "<<indexOfElement<<endl;
    return 0;
}
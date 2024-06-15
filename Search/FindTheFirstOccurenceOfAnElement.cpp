#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccurence(vector<int>v, int target){
    int s = 0;
    int e = v.size() - 1;

    int mid = s + (e - s)/2;
    int ans = -1;
    
    while(e>=s){
        if (v[mid] == target)
        {
            //ans store
            ans = mid;
            //search the last occ in left side
            e = mid - 1;
        }
        else if (target < v[mid])
        {
            //search in left side
            e = mid - 1;
            
        }
        else if (target > v[mid])
        {
            //search in right side
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
    
}

int main(){
    vector<int> v{1,2,4,4,4,6,7,9};
    int target = 4;
    int indexOfFirstOcc = firstOccurence(v, target);

    if(indexOfFirstOcc == -1){
        cout<<"Element is not present"<<endl;
    }
    else{
        cout<<"Element is found at index: "<<indexOfFirstOcc<<endl;
    }


    //Using function
    auto ans2 = lower_bound (v.begin(), v.end(), target);
    cout<<"Ans2 is: "<<ans2-v.begin()<<endl;

    return 0;
}
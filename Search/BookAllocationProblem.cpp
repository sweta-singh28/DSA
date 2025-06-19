#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr, int n, int m, int maxAllowedPages){
    int students = 1;
    int pages = 0;
    
    for(int i=0; i<n; i++){
        //edge cases
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        //need another student
        else{
            students++;
            pages = arr[i];
        }

    }
    return students > m ? false: true;

}


int allocateBooks(vector<int>&arr, int n, int m){
    //edge case
    if(m>n){
        return -1;
    }

    //find the sum of the entire array
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    //range of possible ans
    int start = 0;
    int end = sum;
    int ans = -1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(isValid(arr, n,m, mid)){     //left
            ans = mid;
            end = mid-1;
       
        }
        else{            //right
            start = mid+1;

        }

    }
    return ans;


}

int main(){
    vector<int>arr{12, 34, 67, 90};
    int n = 4;
    int m = 2;


    cout<<allocateBooks(arr, n, m)<<endl;

    return 0;
}